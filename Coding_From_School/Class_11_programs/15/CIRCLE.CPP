
#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;
   initgraph(&gdriver, &gmode, "d:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      cout<<"Graphics error: %s\n"<<grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();
      exit(1);
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   circle(midx, midy, radius);

   getch();
   closegraph();
   return 0;
}

