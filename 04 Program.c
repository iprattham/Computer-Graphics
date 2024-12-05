#include<graphics.h>
#include<conio.h>
void main()
{

  int a,b,i;
  int gd = DETECT,gm;
  initgraph(&gd, &gm, "c:\\turboc4\\tc\\bin");
  a = getmaxx();
  b = getmaxy();

  line(a/2,0,a/2,b);
  line(0,b/2,a,b/2);

  outtextxy(10,20,"Pratham - 00113702022");

  outtextxy(a-50,b/2.75,"x-axis");
  outtextxy(a/2.75,b-50,"y-axis");
  for (i=0; i<a; i+=35)
  {
	line(a/2+i, b/2-10,a/2+i,b/2+10);
	line(a/2-i, b/2+10,a/2-i,b/2-10);
	line(a/2+10, b/2-i,a/2-10,b/2-i);
	line(a/2-10, b/2+i,a/2+10,b/2+i);
  }

  getch();
  closegraph();
}