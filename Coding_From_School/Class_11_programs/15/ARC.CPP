           // ARC
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle = 45, endangle = 135;
   int radius = 100;
   clrscr();
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      cout<<"Graphics error: %s\n"<<grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();
      exit(0);
   }
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   arc(midx, midy, stangle, endangle, radius);
   getch();
   closegraph();
   return 0;
}