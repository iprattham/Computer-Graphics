#include<graphics.h>
#include<conio.h>
void main()
{
int graphicDriver = DETECT,graphicmode;
initgraph(&graphicDriver,&graphicmode,"C:\\turboc3\bgi");
outtextxy(70,260,"Nested Rectangle");
rectangle(100,100,160,160);
setcolor(RED);
rectangle(80,80,180,180);
setcolor(BLUE);
rectangle(60,60,200,200);
setcolor(YELLOW);
rectangle(40,40,220,220);
setcolor(GREEN);
rectangle(20,20,240,240);
setcolor(WHITE);
outtextxy(490,290,"Nested Circle");
circle(450,150,120);
setcolor(RED);
circle(450,150,100);
setcolor(BLUE);
circle(450,150,80);
setcolor(YELLOW);
circle(450,150,60);
printf(" ");
printf("Pratham - 00113702022");

getch();
closegraph();
}
