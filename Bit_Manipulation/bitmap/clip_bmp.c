#include<stdio.h>
#include<stdlib.h>
struct BITMAP_header{
char name[2];
unsigned int size;
int garbage;
unsigned int image_offset;
};
struct DIB_header{
unsigned int header_size;
unsigned int width;
unsigned int hight;
unsigned short int colorplanes;
unsigned short int bitsperpixel;
unsigned int compression;
unsigned int image_size;
};

struct RGB{
unsigned char blue;
unsigned char green;
unsigned char red;
};
struct Image{
int hight;
int width;
struct RGB **rgb;
};

struct Image readImage(FILE *fp,int hight,int width){
    struct Image pic;
    pic.rgb=(struct RGB**) malloc(hight*sizeof(void*));
    pic.hight=hight;
    pic.width=width;
    int bytestoread=((24*width+31)/32)*4;
    int numOfrgb=bytestoread/sizeof(struct RGB)+1;
    for(int i=hight-1;i>=0;i--){
        pic.rgb[i]=(struct RGB*)malloc(numOfrgb*sizeof(struct RGB));
        fread(pic.rgb[i],1,bytestoread,fp);
    }
    return pic;
}
void freeImage(struct Image pic)
{
    for(int i=pic.hight-1;i>=0;i--){
        free(pic.rgb[i]);
    }
    free(pic.rgb);
}

unsigned char grayscale(struct RGB rgb){
return (rgb.red*0.3 + rgb.blue*0.1 + rgb.green*0.6);
}

void RGBImageToGrayscale(struct Image pic)
{
    int i,j;
    for(i=0;i<pic.hight;i++)
        for(j=0;j<pic.width;j++){
            pic.rgb[i][j].red=pic.rgb[i][j].blue=pic.rgb[i][j].green=grayscale(pic.rgb[i][j]);
        }
}

int createBWImage(struct BITMAP_header header,struct DIB_header dibheader,struct Image pic)
{
    int i;
    FILE *fpw=fopen("new2.bmp","w");
    if(fpw==NULL) return 1;
    RGBImageToGrayscale(pic);
    fwrite(header.name,2,1,fpw);
    fwrite(&header.size,3*sizeof(int),1,fpw);
    fwrite(&header, sizeof(struct DIB_header),1,fpw);

    for(i=pic.hight-1;i>=0;i--)
        fwrite(pic.rgb[i],((24*pic.width+31)/32)*4,1,fpw);


    fclose(fpw);
    return 0;
}

int openbmpfile(){
FILE *fp=fopen("test_image.bmp","rb");
struct BITMAP_header header;
struct DIB_header dibheader;

fread(header.name,2,1,fp);
fread(&header.size,3*sizeof(int),1,fp);
printf("first two char:%c%c\n",header.name[0],header.name[1]);
printf("Size:%d\n",header.size);
printf("Offset:%d\n",header.image_offset);

fread(&dibheader,sizeof(struct DIB_header),1,fp);

printf("Header size:%d\nWidth:%d\nHeight:%d\nColor planes:%d\nBits per pixel:%d\nCompress:%d\nImage Size:%d\n",
       dibheader.header_size,dibheader.width, dibheader.hight,dibheader.colorplanes,dibheader.bitsperpixel, dibheader.compression,dibheader.image_size);
if((dibheader.header_size != 40) || (dibheader.compression != 0) || (dibheader.bitsperpixel != 24))
{
    fclose(fp);
    return 1;
}
fseek(fp,header.image_offset,SEEK_SET);
struct Image image=readImage(fp,dibheader.hight,dibheader.width);

createBWImage(header,dibheader,image);

fclose(fp);
freeImage(image);
return 0;
}
int main(){
openbmpfile();

return 0;
}
