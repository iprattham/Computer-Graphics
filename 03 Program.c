#include<graphics.h>
#include<conio.h>
void main()
{
int graphicdriver = DETECT,graphicmode;
initgraph(&graphicdriver,&graphicmode,"C:\\turboc3\bgi");
circle(300,200,75);
outtextxy(200,300,"Asterisk inside the Circle");
line(225,200,375,200);
line(300,125,300,275);
line(250,150,350,250);
line(350,150,250,250);
printf("Pratham - 00113702022");

getch();
closegraph();
}