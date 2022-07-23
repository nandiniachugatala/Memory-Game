#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<graphics>
#include<dos.h>
void boundary_fill(int x,int y,int fill_c,int boundary_c)      ;
void bollon();
void car();
void firstCrown();
void  secondCrown();
void  thirdCrown();
void  trunk();
int i;
void main()
{
int c,r,a,e,gd=DETECT,gm,b;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

setbkcolor(3) ;
settextstyle(1,HORIZ_DIR,9);
outtextxy(150,100,"TIRCY ") ;
outtextxy(150,200,"GAME ") ;
settextstyle(1,HORIZ_DIR,2) ;
outtextxy(250,420,"Loading...") ;
rectangle(100,100,500,320);

rectangle(70,70,535,350) ;  //outer

delay(5000);

setbkcolor(12);
cleardevice();
  settextstyle(1,HORIZ_DIR,6);
outtextxy(50,100,"Welcome to first level...  ") ;
delay(2000) ;
cleardevice();
rectangle(20,20,610,460);
rectangle(30,30,600,450);
rectangle(40,40,590,440);

rectangle(50,50,100,100);

boundary_fill(55,55,4,15) ;

for(i=60,r=2;i<360;i=i+60,r++)
{

rectangle(50+i,50+i,100+i,100+i);
delay(0) ;
boundary_fill(55+i,55+i,r,15) ;
delay(1500);
}

cleardevice();
     settextstyle(1,HORIZ_DIR,2) ;

outtextxy(100,100,"Enter no of boxes on previous  screen?...") ;

printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t");
printf("Ans:->");
scanf("%d",&b);
if(b==9)
{
cleardevice();

settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"WOW....") ;
outtextxy(100,200," YOU WON ") ;
outtextxy(100,300," WIN THE LEVEL ") ;


c=1;
}
else
{
cleardevice();
      settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"Ahhhh...") ;
outtextxy(100,300," YOU LOOSE THE LEVEL...") ;



}
delay(2000) ;

if(c==1)
{
cleardevice();
setbkcolor(13);
cleardevice();
  settextstyle(1,HORIZ_DIR,6);
outtextxy(50,100,"Welcome to second");
outtextxy(50,150," level..") ;
delay(3000);
cleardevice();
setbkcolor(7);
bollon();
delay(1) ;
  delay(3000);
cleardevice();
setbkcolor(13);
     settextstyle(1,HORIZ_DIR,2) ;

outtextxy(100,100,"Enter no of bollns on previous  screen?...") ;

printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
printf("Ans:->");
scanf("%d",&a);
if(a==3)
{
cleardevice();

settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"WOW....") ;
outtextxy(100,200," YOU WON ") ;
outtextxy(100,300," WIN THE LEVEL ") ;
 c=2;
}
else
{
cleardevice();
      settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"Ahhhh...") ;
outtextxy(100,300," YOU LOOSE THE LEVEL...") ;


}
}
delay(3000);

if(c==2)
{

cleardevice();
setbkcolor(13);
cleardevice();
  settextstyle(1,HORIZ_DIR,6);
outtextxy(50,100,"Welcome to third");
outtextxy(50,150," level..") ;
delay(4000);
cleardevice();
setbkcolor(6);

 int i,n,d,p;
settextstyle(0,HORIZ_DIR,1);
 outtextxy(100,100,"Enter Number of times you want");
 outtextxy(100,150," to change the color of tree:");
 printf("\t\t->") ;
 scanf("%d",&n);
 p=n;
 cleardevice();
 setbkcolor(BLACK);
 for(i=0;i<n;i++)
 {
 //=============================== First Crown ================================
  cleardevice();
  firstCrown();
  secondCrown();
  thirdCrown();
  trunk();
  //To Change the color of first Crown
  setfillstyle(SOLID_FILL,RED);
  line(300,40,200,100);
  line(300,40,400,100);
  ellipse(300,100,180,360,98,30);
  floodfill(310,50,WHITE);
  //To display a Text Message
  setcolor(RED);
  settextstyle(SCRIPT_FONT, HORIZ_DIR, 10);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(300,370,"Wish You");
  delay(2000);
  graphdefaults();
  cleardevice();

 //============================= Second Crown ===============================
  firstCrown();
  secondCrown();
  thirdCrown();
  trunk();
  //To Change the color of Second Crown
  setfillstyle(SOLID_FILL,MAGENTA);
  line(250,125,180,160);
  line(350,125,420,160);
  ellipse(300,160,180,360,120,30);
  floodfill(260,130,WHITE);
  //To display a Text Message
  setcolor(MAGENTA);
  settextstyle(SCRIPT_FONT, HORIZ_DIR, 10);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(300,370,"A Merry");
  delay(2000);
  graphdefaults();
  cleardevice();

 //============================= Third Crown ================================
  firstCrown();
  secondCrown();
  thirdCrown();
  trunk();
  //To Change the color of Third Crown
  setfillstyle(SOLID_FILL,BLUE);
  line(230,185,150,230);
  line(360,185,440,230);
  ellipse(295,230,180,360,145,30);
  floodfill(250,190,WHITE);
  //To display a Text Message
  setcolor(MAGENTA);
  settextstyle(SCRIPT_FONT, HORIZ_DIR, 10);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(300,370,"Christmas");
  delay(2000);
  graphdefaults();
  cleardevice();
 }
 delay(3000);
 cleardevice();
setbkcolor(6);
 settextstyle(0,HORIZ_DIR,1);
 outtextxy(100,100,"Enter how many times");
 outtextxy(100,150," tree color is channged?..");
 printf("\t\t Ans->");
 scanf("%d",&d);

 if(p==d)
 {
 cleardevice();
 setbkcolor(6);
 settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"WOW....") ;
outtextxy(100,200," YOU WON ") ;
outtextxy(100,300," WIN THE LEVEL ") ;
 c=4;
}
else
{
cleardevice();
setbkcolor(6);
      settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"Ahhhh...") ;
outtextxy(100,300," YOU LOOSE THE LEVEL...") ;


}

if(c==4)
{
cleardevice();
setbkcolor(13);
cleardevice();
  settextstyle(1,HORIZ_DIR,6);
outtextxy(50,100,"Welcome to forth");
outtextxy(50,150," level..") ;
delay(3000);
cleardevice();
setbkcolor(7);
car();
delay(1) ;
  delay(3000);
cleardevice();
setbkcolor(6);
     settextstyle(0,HORIZ_DIR,1) ;

outtextxy(100,200,"Enter which image is  displayed");
outtextxy(100,250," on  the previous  screen?...") ;
outtextxy(100,300,"1.TRUCK.");

outtextxy(100,350,"2.CAR.");
outtextxy(100,400,"3.BOAT.");
outtextxy(100,450,"4.CRANE.");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t");
printf("Ans:->");
scanf("%d",&e);
if(e==2)
{
cleardevice();

settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"WOW....") ;
outtextxy(100,200," YOU WON ") ;
outtextxy(100,300," WIN THE LEVEL ") ;
 c=4;
}
else
{
cleardevice();
      settextstyle(1,HORIZ_DIR,2) ;
outtextxy(100,100,"Ahhhh...") ;
outtextxy(100,300," YOU LOOSE THE LEVEL...") ;

	    delay(3000) ;
}
}


getch();
}
}
void firstCrown()
{
 setfillstyle(SOLID_FILL,GREEN);
 line(300,40,200,100);
 line(300,40,400,100);
 ellipse(300,100,180,360,98,30);
 floodfill(310,50,WHITE);
}
void secondCrown()
{
 setfillstyle(SOLID_FILL,GREEN);
 line(250,125,180,160);
 line(350,125,420,160);
 ellipse(300,160,180,360,120,30);
 floodfill(260,130,WHITE);
}
void thirdCrown()
{
 setfillstyle(SOLID_FILL,GREEN);
 line(230,185,150,230);
 line(360,185,440,230);
 ellipse(295,230,180,360,145,30);
 floodfill(250,190,WHITE);
}
void trunk()
{
 setfillstyle(SOLID_FILL,BROWN);
 line(280,260,280,350);
 line(320,260,320,350);
 line(280,350,320,350);
 floodfill(285,340,WHITE);
}

void boundary_fill(int x,int y,int fill_c,int boundary_c)
{
if(getpixel(x,y)!=boundary_c&&getpixel(x,y)!=fill_c)
{
putpixel(x,y,fill_c)  ;
delay(2);
boundary_fill(x-1,y+1,fill_c,boundary_c) ;

boundary_fill(x,y-1,fill_c,boundary_c) ;
boundary_fill(x+1,y+1,fill_c,boundary_c) ;
boundary_fill(x,y+1,fill_c,boundary_c) ;
boundary_fill(x+1,y-1,fill_c,boundary_c) ;

boundary_fill(y+1,x,fill_c,boundary_c) ;
boundary_fill(x-1,y-1,fill_c,boundary_c) ;
boundary_fill(y,x+1,fill_c,boundary_c) ;


}

}

void car()
{
  for(i=0;i<=500;i=i+50)
 {
//road
  line(0,322,700,322);

  //Car Body
  line(0+i,300,13+i,298);
  line(13+i,298,30+i,280);
  line(30+i,280,80+i,280);
  line(80+i,280,97+i,298);
  line(97+i,298,120+i,300);
  line(0+i,300,0+i,315);
  line(0+i,315,25+i,315);
  arc(35+i,315,0,180,9);
  line(45+i,315,67+i,315);
  arc(77+i,315,0,180,9);
  line(85+i,315,120+i,315);
  line(120+i,300,120+i,315);

  //First Window
  line(32+i,285,50+i,285);
  line(50+i,285,50+i,295);
  line(50+i,295,23+i,295);
  line(32+i,285,23+i,295);

  //Second Window
  line(60+i,285,78+i,285);
  line(60+i,285,60+i,295);
  line(60+i,295,85+i,295);
  line(78+i,285,85+i,295);

  //Wheels
  circle(35+i,315,6);
  circle(77+i,315,6);

  delay(80);
  cleardevice();
 }

}


void bollon()
{
 for(int i=30;i<600;i=i+30)
 {
	//Head
	circle(20+i,250,20);
	line(20+i,270,20+i,340);

	//Eye
	circle(27+i,248,1);

	//leg
	line(20+i,340,5+i,380);
	line(20+i,340,35+i,380);

	//hand
	line(20+i,290,40+i,300);
	line(40+i,300,60+i,270);

	//1st Balloon
	line(60+i,270,60+i,180);
	circle(60+i,160,20);

	//2nd Balloon
	line(60+i,270,100+i,180);
	circle(110+i,160,20);

	//3rd Balloon
	line(60+i,270,150+i,180);
	circle(160+i,160,20);

	//Road
	line(0,380,700,380);

	delay(40);
	cleardevice();
}
}
