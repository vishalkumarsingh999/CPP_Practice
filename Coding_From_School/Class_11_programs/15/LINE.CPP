                                          //LINE
#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;
   initgraph(&gdriver, &gmode, "d:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      cout<<"Graphics error: %s\n"<<grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   xmax = getmaxx();
   ymax = getmaxy();
   line(0, 0, xmax, ymax);
   getch();
   closegraph();
   return 0;
}

