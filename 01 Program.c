#include<graphics.h>
#include<conio.h>
void main()
{
int graphicdriver = DETECT,graphicmode;
initgraph(&graphicdriver,&graphicmode,"C:\\turboc3\bgi");
outtextxy(10,10+10,"Program to draw a circle, Ellipse, Arc, Rectangle");
arc (100,250,180,0,50);
sector (250,300,0,70,100,100);
circle(100,100,50);
ellipse(300,110,0,360,100,50);
bar(120,550,100,350);
line(350,550,350,350);
printf("Pratham - 00113702022");

getch();
closegraph();
}