#include<graphics.h>
#include<conio.h>
void main()
{

  int gd = DETECT,gm;
  initgraph(&gd, &gm, "c:\\turboc4\\tc\\bin");

  line(80,60,80,380);
  line(80,380,550,380);

  outtextxy(20,70,"y-axis");
  outtextxy(570,390,"x-axis");

  setfillstyle(SOLID_FILL,7);
  bar(120,230,170,375);
  outtextxy(130,390,"2017");

  setfillstyle(XHATCH_FILL,6);
  bar(200,120,250,375);
  outtextxy(210,390,"2018");

  setfillstyle(HATCH_FILL,8);
  bar(280,320,330,375);
  outtextxy(290,390,"2019");

  setfillstyle(WIDE_DOT_FILL,9);
  bar(360,200,410,375);
  outtextxy(370,390,"2020");

  setfillstyle(LTBKSLASH_FILL,10);
  bar(440,100,490,375);
  outtextxy(450,390,"2021");

  outtextxy(10,20,"Pratham - 00113702022                  Bar Chart");

getch();
closegraph();
}