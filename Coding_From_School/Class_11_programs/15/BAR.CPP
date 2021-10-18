
               // BAR

#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy, i;
   initgraph(&gdriver, &gmode, "");
   clrscr();
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
   for (i=SOLID_FILL; i<USER_FILL; i++)
   {
    setfillstyle(i, getmaxcolor());
    bar(midx-50, midy-50, midx+50,
	 midy+50);
    getch();
   }
   closegraph();
   return 0;
}