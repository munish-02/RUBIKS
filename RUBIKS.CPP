#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>

struct opt
{
int no;
int x1,y1,x3,y3;
char mn[50];
}opt01,opt02,opt03,opt04,opt05,opt06,opt07,opt08,opt09,opt10,opt11,opt12,opt13,opt14,opt15,opt16;
struct poly     //each box of the cube
	{
	int xy[10];
	int color;
	}f1,f2,f3,f4,f5,f6,f7,f8,f9,b1,b2,b3,b4,b5,b6,b7,b8,b9,u1,u2,u3,u4,u5,u6,u7,u8,u9,l3,l2,l1,l6,l5,l4,l9,l8,l7,d7,d8,d9,d4,d5,d6,d1,d2,d3,r1,r2,r3,r4,r5,r6,r7,r8,r9;
void swap(poly &x,poly &y)
	{ int l3;
	l3=x.color;
	x.color=y.color;
	y.color=l3;
	setfillstyle(1,x.color);
	fillpoly(4,x.xy);
	setfillstyle(1,y.color);
	fillpoly(4,y.xy);

	}

void ui()//Up right
	{swap(f1,l1);
	swap(f2,l2);
	swap(f3,l3);
	swap(f1,b3);
	swap(f2,b2);
	swap(f3,b1);
	swap(f1,r1);
	swap(f2,r2);
	swap(f3,r3);
	swap(u9,u3);
	swap(u9,u1);
	swap(u9,u7);
	swap(u4,u8);
	swap(u4,u6);
	swap(u4,u2); delay(20);
	}
void uu()
	{for (int i = 1; i<4;i++)
	 ui();       delay(20);
	}
void hh()
	{ //LEFT DOWN
	swap(f1,d1);
	swap(f4,d4);
	swap(f7,d7);
	swap(f1,b7);
	swap(f4,b4);
	swap(f7,b1);
	swap(f1,u1);
	swap(f4,u4);
	swap(f7,u7);
	swap(r1,r3);
	swap(r1,r9);
	swap(r1,r7);
	swap(r2,r6);
	swap(r2,r8);
	swap(r2,r4); delay(20);
	}
void li()
	{//LEFT UP
	for (int i = 1 ; i<4; i++)
	hh();        delay(20);
	}
void rr()
	{//RIGHT UP
	swap(f3,u3);
	swap(f6,u6);
	swap(f9,u9);
	swap(f3,b9);
	swap(f6,b6);
	swap(f9,b3);
	swap(f3,d3);
	swap(f6,d6);
	swap(f9,d9);
	swap(l3,l9);
	swap(l3,l7);
	swap(l3,l1);
	swap(l2,l6);
	swap(l2,l8);
	swap(l2,l4); delay(20);
	}
void ri()
	{//Right down
	for(int i = 1 ; i<4 ; i++ )
	rr();        delay(20);
	}

void ff()
	{
	 //front right
	 swap(f1,f3);
	 swap( f1,f9);
	 swap( f1,f7);
	 swap( f2,f6);
	 swap(f2,f8);
	 swap(f2,f4);
	 swap(u7,l1);
	 swap(u8,l4);
	 swap(u9,l7);
	 swap(u7,d3);
	 swap(u8,d2);
	 swap(u9,d1);
	 swap(u9,r3);
	 swap(u8,r6);
	 swap(u7,r9);delay(20);

	 }
void fi()
{    // front left
	for(int i = 1 ; i<4; i++)
	ff();        delay(20);
	}

void bi()
	{ //back right
	swap(b1,b3);
	swap(b1,b9);
	swap(b1,b7);
	swap(b2,b6);
	swap(b2,b8);
	swap(b2,b4);
	swap(u1,l3);
	swap(u2,l6);
	swap(u3,l9);
	swap(u1,d9);
	swap(u2,d8);
	swap(u3,d7);
	swap(u1,r7);
	swap(u2,r4);
	swap(u3,r1); delay(20);
	}
void bb()
	{ //back left
	for(int i =1; i<4;i++)
	bi();        delay(20);
	}
void dd()
	 {//down right
	 swap(d7,d1);
	 swap(d7,d3);
	 swap(d7,d9);
	 swap(d8,d4);
	 swap(d8,d2);
	 swap(d8,d6);
	 swap(f7,l7);
	 swap(f8,l8);
	 swap(f9,l9);
	 swap(f7,b9);
	 swap(f8,b8);
	 swap(f9,b7);
	 swap(f7,r7);
	 swap(f8,r8);
	 swap(f9,r9);delay(20);
	 }
void di()
	{for(int i = 1;i<4;i++)
	dd();
	//down left  delay(20);
	}
void mu();
void md()
	{//middle down
	for(int i = 1; i<4 ; i++)
	mu();        delay(20);
	}
void mu()
	{//middle up
	swap(f2,u2);
	swap(f5,u5);
	swap(f8,u8);
	swap(f2,b8);
	swap(f5,b5);
	swap(f8,b2);
	swap(f2,d2);
	swap(f5,d5);
	swap(f8,d8); delay(20);
	}
void ml();
void mr()
	{ml();
	 ml();
	 ml(); delay(20);
	}
void ml()
	{swap(f4,l4);
	swap(f5,l5);
	swap(f6,l6);
	swap(f4,b6);
	swap(f5,b5);
	swap(f6,b4);
	swap(f4,r4);
	swap(f5,r5);
	swap(f6,r6);
	delay(20);
	}
void select(opt &x,char y[50])
{setfillstyle(1,GREEN);
bar(x.x1-5,x.y1-5,x.x3+5,x.y3+5);
setfillstyle(1,RED);
bar(x.x1,x.y1,x.x3,x.y3);
settextstyle(2,0,0.5);
setcolor(WHITE);
outtextxy((x.x1+x.x3)/2-10,(x.y1+x.y3)/2,y);
x.no=1;
}
void unselect(opt &x, char y[50])
{setfillstyle(1,BLACK) ;
bar(x.x1-5,x.y1-5,x.x3+5,x.y3+5);
setfillstyle(1,RED);
bar(x.x1,x.y1,x.x3,x.y3);
settextstyle(2,0,0.5);
setcolor(WHITE);
outtextxy((x.x1+x.x3)/2-10,(x.y1+x.y3)/2,y);
x.no=0;
}
void main ()
	{       clrscr();
	int gd,gm ;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\BGI" ) ;
	opt01.x1=10;

char popt01[50]="(Ui)";
char popt02[50]="(UU)";
char popt03[50]="(LL) ";
char popt04[50] = "(Li)" ;
char popt05[50]="(RR)";
char popt06[50] ="(Ri)";
char popt07[50]="(FF)";
char popt08[50]="(Fi)";
char popt09[50]="(Bi)";
char popt10[50]="(BB)";
char popt11[50]="(DD)";
char popt12[50]="(Di)";

  opt01.y1=10;
  opt01.x3=50;
  opt01.y3=75;
  setfillstyle(1,4);
  bar(opt01.x1,opt01.y1,opt01.x3,opt01.y3);
  opt02.x1=70;
  opt02.y1=10;
  opt02.x3=110;
  opt02.y3=75;

  bar(opt02.x1,opt02.y1,opt02.x3,opt02.y3);
  opt03.x1=130;
  opt03.y1=10;
  opt03.x3=170;
  opt03.y3=75;

  bar(opt03.x1,opt03.y1,opt03.x3,opt03.y3);


  opt06.x1=130;
  opt06.y1=85;
  opt06.x3=170;
  opt06.y3=150;

  bar(opt06.x1,opt06.y1,opt06.x3,opt06.y3);
     opt05.x1=70;
  opt05.y1=85;
  opt05.x3=110;
  opt05.y3=150;

  bar(opt05.x1,opt05.y1,opt05.x3,opt05.y3);
   opt04.x1=10;
  opt04.y1=85;
  opt04.x3=50;
  opt04.y3=150;

  bar(opt04.x1,opt04.y1,opt04.x3,opt04.y3);
    opt07.x1=10;
  opt07.y1=160;
  opt07.x3=50;
  opt07.y3=225;

  bar(opt07.x1,opt07.y1,opt07.x3,opt07.y3);
   opt08.x1=70;
  opt08.y1=160;
  opt08.x3=110;
  opt08.y3=225;

  bar(opt08.x1,opt08.y1,opt08.x3,opt08.y3);
    opt09.x1=130;
  opt09.y1=160;
  opt09.x3=170;
  opt09.y3=225;

  bar(opt09.x1,opt09.y1,opt09.x3,opt09.y3);
    opt12.x1=130;
  opt12.y1=235;
  opt12.x3=170;
  opt12.y3=300;

  bar(opt12.x1,opt12.y1,opt12.x3,opt12.y3);
   opt11.x1=70;
  opt11.y1=235;
  opt11.x3=110;
  opt11.y3=300;

  bar(opt11.x1,opt11.y1,opt11.x3,opt11.y3);
    opt10.x1=10;
  opt10.y1=235;
  opt10.x3=50;
  opt10.y3=300;

  bar(opt10.x1,opt10.y1,opt10.x3,opt10.y3);
   select(opt01,popt01);



	setcolor(1);
	setfillstyle(1,GREEN);
	f1.xy[0]=300;
	f1.xy[1]=200;
	f1.xy[2]=320;
	f1.xy[3]=200;
	f1.xy[4]=320;
	f1.xy[5]=220;
	f1.xy[6]=300;
	f1.xy[7]=220;
	f2.xy[0]=325;
	f2.xy[1]=200;
	f2.xy[2]=345;
	f2.xy[3]=200;
	f2.xy[4]=345;
	f2.xy[5]=220;
	f2.xy[6]=325;
	f2.xy[7]=220;
	f3.xy[0]=350;
	f3.xy[1]=200;
	f3.xy[2]=370;
	f3.xy[3]=200;
	f3.xy[4]=370;
	f3.xy[5]=220;
	f3.xy[6]=350;
	f3.xy[7]=220;
	f4.xy[0]=300;
	f4.xy[1]=225;
	f4.xy[2]=320;
	f4.xy[3]=225;
	f4.xy[4]=320;
	f4.xy[5]=245;
	f4.xy[6]=300;
	f4.xy[7]=245;
	f5.xy[0]=325;
	f5.xy[1]=225;
	f5.xy[2]=345;
	f5.xy[3]=225;
	f5.xy[4]=345;
	f5.xy[5]=245;
	f5.xy[6]=325;
	f5.xy[7]=245;
	f6.xy[0]=350;
	f6.xy[1]=225;
	f6.xy[2]=370;
	f6.xy[3]=225;
	f6.xy[4]=370;
	f6.xy[5]=245;
	f6.xy[6]=350;
	f6.xy[7]=245;
	f9.xy[0]=350;
	f9.xy[1]=250;
	f9.xy[2]=370;
	f9.xy[3]=250;
	f9.xy[4]=370;
	f9.xy[5]=270;
	f9.xy[6]=350;
	f9.xy[7]=270;
	f8.xy[0]=325;
	f8.xy[1]=250;
	f8.xy[2]=345;
	f8.xy[3]=250;
	f8.xy[4]=345;
	f8.xy[5]=270;
	f8.xy[6]=325;
	f8.xy[7]=270;
	f7.xy[0]=300;
	f7.xy[1]=250;
	f7.xy[2]=320;
	f7.xy[3]=250;
	f7.xy[4]=320;
	f7.xy[5]=270;
	f7.xy[6]=300;
	f7.xy[7]=270;
	fillpoly(4,f1.xy);
	fillpoly(4,f2.xy);
	fillpoly(4,f3.xy);
	fillpoly(4,f4.xy);
	fillpoly(4,f5.xy);
	fillpoly(4,f6.xy);
	fillpoly(4,f9.xy);
	fillpoly(4,f7.xy);
	fillpoly(4,f8.xy);
	setcolor(25);
	line(298.5,198.5,298.5,272.5);
	line(298.5,198.5,372.5,198.5);
	line(298.5,222.5,372.5,222.5);
	line(298.5,248.5,372.5,248.5);
	line(298.5,272.5,372.5,272.5);
	line(322.5,198.5,322.5,272.5);
	line(347.5,198.5,347.5,272.5);
	line(372.5,198.5,372.5,272.5);
	line(298.5,198.5,268.5,168.5);//lleftup
	line(298.5,272.5,268.5,242.5);//lleftdown
	line(268.5,168.5,268.5,242.5);//lleftback
	line(372.5,198.5,340.5,168.5);//upleft
	line(342.5,168.5,268.5,168.5);//upup
	line(268.5,192.5,298.5,222.5);//leftup2
	line(268.5,219.5,298.5,248.5);//leftup3
	line(351.5,177.5,277.5,177.5);//upup1
	line(360,187,287,187);//upup2
	line(277.5,177.5,277.5,252.5);//leftback1
	line(287,187,287,261);//leftback2
	line(322.5,198.5,288.5,167.5);//upleft1
	line(348.5,198.5,315.5,167.5);//upleft2
	line(322.5,398.5,288.5,367.5);//downleft1
	line(348.5,398.5,315.5,367.5);//downleft
	line(351.5,377.5,277.5,377.5);//downup1
	line(360,387,287,387);//downup2
	line(342.5,368.5,268.5,368.5);//downup
	line(298.5,398.5,372.5,398.5);//downfront
	line(372.5,398.5,340.5,368.5);//downleft
	line(298.5,398.5,268.5,368.5);//ldownup
	line(477.5,177.5,477.5,252.5);//rightback1
	line(487,187,487,261);//rightback2
	line(498.5,198.5,468.5,168.5);//righttup
	line(498.5,272.5,468.5,242.5);//rightdown
	line(468.5,168.5,468.5,242.5);//rightback
	line(498.5,198.5,498.5,272.5);//rightfront
	line(468.5,192.5,498.5,222.5);//rightup2
	line(468.5,219.5,498.5,248.5);//righftup3
	setfillstyle(1,BLUE);
	b1.xy[0]=200;
	b1.xy[1]=100;
	b1.xy[2]=220;
	b1.xy[3]=100;
	b1.xy[4]=220;
	b1.xy[5]=120;
	b1.xy[6]=200;
	b1.xy[7]=120;
	b2.xy[0]=225;
	b2.xy[1]=100;
	b2.xy[2]=245;
	b2.xy[3]=100;
	b2.xy[4]=245;
	b2.xy[5]=120;
	b2.xy[6]=225;
	b2.xy[7]=120;
	b3.xy[0]=250;
	b3.xy[1]=100;
	b3.xy[2]=270;
	b3.xy[3]=100;
	b3.xy[4]=270;
	b3.xy[5]=120;
	b3.xy[6]=250;
	b3.xy[7]=120;
	b4.xy[0]=200;
	b4.xy[1]=125;
	b4.xy[2]=220;
	b4.xy[3]=125;
	b4.xy[4]=220;
	b4.xy[5]=145;
	b4.xy[6]=200;
	b4.xy[7]=145;
	b5.xy[0]=225;
	b5.xy[1]=125;
	b5.xy[2]=245;
	b5.xy[3]=125;
	b5.xy[4]=245;
	b5.xy[5]=145;
	b5.xy[6]=225;
	b5.xy[7]=145;
	b6.xy[0]=250;
	b6.xy[1]=125;
	b6.xy[2]=270;
	b6.xy[3]=125;
	b6.xy[4]=270;
	b6.xy[5]=145;
	b6.xy[6]=250;
	b6.xy[7]=145;
	b9.xy[0]=250;
	b9.xy[1]=150;
	b9.xy[2]=270;
	b9.xy[3]=150;
	b9.xy[4]=270;
	b9.xy[5]=170;
	b9.xy[6]=250;
	b9.xy[7]=170;
	b8.xy[0]=225;
	b8.xy[1]=150;
	b8.xy[2]=245;
	b8.xy[3]=150;
	b8.xy[4]=245;
	b8.xy[5]=170;
	b8.xy[6]=225;
	b8.xy[7]=170;
	b7.xy[0]=200;
	b7.xy[1]=150;
	b7.xy[2]=220;
	b7.xy[3]=150;
	b7.xy[4]=220;
	b7.xy[5]=170;
	b7.xy[6]=200;
	b7.xy[7]=170;
	fillpoly(4,b1.xy);
	fillpoly(4,b2.xy);
	fillpoly(4,b3.xy);
	fillpoly(4,b4.xy);
	fillpoly(4,b5.xy);
	fillpoly(4,b6.xy);
	fillpoly(4,b9.xy);
	fillpoly(4,b7.xy);
	fillpoly(4,b8.xy);
	setcolor(25);
	line(198.5,98.5,198.5,172.5);
	line(198.5,98.5,272.5,98.5);
	line(198.5,122.5,272.5,122.5);
	line(198.5,148.5,272.5,148.5);
	line(198.5,172.5,272.5,172.5);
	line(222.5,98.5,222.5,172.5);
	line(247.5,98.5,247.5,172.5);
	line(272.5,98.5,272.5,172.5);
	setfillstyle(1,6);
	setcolor(1);
	int ll[10];
	r1.xy[0]=270;
	r1.xy[1]=170;
	r1.xy[2]=275;
	r1.xy[3]=180;
	r1.xy[4]=275;
	r1.xy[5]=198;
	r1.xy[6]=270;
	r1.xy[7]=191;

	fillpoly(4,r1.xy);
	r2.xy[0]=278;
	r2.xy[1]=178;
	r2.xy[2]=285;
	r2.xy[3]=188;
	r2.xy[4]=285;
	r2.xy[5]=207;
	r2.xy[6]=278;
	r2.xy[7]=200;
	fillpoly(4,r2.xy);
	r3.xy[0]=288;
	r3.xy[1]=188;
	r3.xy[2]=296;
	r3.xy[3]=197;
	r3.xy[4]=296;
	r3.xy[5]=218;
	r3.xy[6]=288;
	r3.xy[7]=208;
	fillpoly(4,r3.xy);
	r4.xy[0]=270;
	r4.xy[1]=194;
	r4.xy[2]=275;
	r4.xy[3]=202;
	r4.xy[4]=275;
	r4.xy[5]=224;
	r4.xy[6]=270;
	r4.xy[7]=217;
	fillpoly(4,r4.xy);
	r7.xy[0]=270;
	r7.xy[1]=221;
	r7.xy[2]=275;
	r7.xy[3]=229;
	r7.xy[4]=275;
	r7.xy[5]=249;
	r7.xy[6]=270;
	r7.xy[7]=242;
	fillpoly(4,r7.xy);
	r5.xy[0]=278;
	r5.xy[1]=205;
	r5.xy[2]=285;
	r5.xy[3]=212;
	r5.xy[4]=285;
	r5.xy[5]=233;
	r5.xy[6]=278;
	r5.xy[7]=225;
	fillpoly(4,r5.xy);
	r8.xy[0]=279;
	r8.xy[1]=231;
	r8.xy[2]=286;
	r8.xy[3]=238;
	r8.xy[4]=284;
	r8.xy[5]=257;
	r8.xy[6]=279;
	r8.xy[7]=249;
	fillpoly(4,r8.xy);
	r6.xy[0]=288;
	r6.xy[1]=213;
	r6.xy[2]=296;
	r6.xy[3]=222;
	r6.xy[4]=296;
	r6.xy[5]=243;
	r6.xy[6]=288;
	r6.xy[7]=233;
	fillpoly(4,r6.xy);
	r9.xy[0]=288;
	r9.xy[1]=240;
	r9.xy[2]=296;
	r9.xy[3]=249;
	r9.xy[4]=296;
	r9.xy[5]=269;
	r9.xy[6]=288;
	r9.xy[7]=259;
	fillpoly(4,r9.xy);
	setfillstyle(1,RED);
	l3.xy[0]=470;
	l3.xy[1]=170;
	l3.xy[2]=475;
	l3.xy[3]=180;
	l3.xy[4]=475;
	l3.xy[5]=198;
	l3.xy[6]=470;
	l3.xy[7]=191;
	fillpoly(4,l3.xy);
	l2.xy[0]=478;
	l2.xy[1]=178;
	l2.xy[2]=485;
	l2.xy[3]=188;
	l2.xy[4]=485;
	l2.xy[5]=207;
	l2.xy[6]=478;
	l2.xy[7]=200;
	fillpoly(4,l2.xy);
	l1.xy[0]=488;
	l1.xy[1]=188;
	l1.xy[2]=496;
	l1.xy[3]=197;
	l1.xy[4]=496;
	l1.xy[5]=218;
	l1.xy[6]=488;
	l1.xy[7]=208;
	fillpoly(4,l1.xy);
	l6.xy[0]=470;
	l6.xy[1]=194;
	l6.xy[2]=475;
	l6.xy[3]=202;
	l6.xy[4]=475;
	l6.xy[5]=224;
	l6.xy[6]=470;
	l6.xy[7]=217;
	fillpoly(4,l6.xy);
	l9.xy[0]=470;
	l9.xy[1]=221;
	l9.xy[2]=475;
	l9.xy[3]=229;
	l9.xy[4]=475;
	l9.xy[5]=249;
	l9.xy[6]=470;
	l9.xy[7]=242;
	fillpoly(4,l9.xy);
	l5.xy[0]=478;
	l5.xy[1]=205;
	l5.xy[2]=485;
	l5.xy[3]=212;
	l5.xy[4]=485;
	l5.xy[5]=233;
	l5.xy[6]=478;
	l5.xy[7]=225;
	fillpoly(4,l5.xy);
	l8.xy[0]=479;
	l8.xy[1]=231;
	l8.xy[2]=486;
	l8.xy[3]=238;
	l8.xy[4]=484;
	l8.xy[5]=257;
	l8.xy[6]=479;
	l8.xy[7]=249;
	fillpoly(4,l8.xy);
	l4.xy[0]=488;
	l4.xy[1]=213;
	l4.xy[2]=496;
	l4.xy[3]=222;
	l4.xy[4]=496;
	l4.xy[5]=243;
	l4.xy[6]=488;
	l4.xy[7]=233;
	fillpoly(4,l4.xy);
	l7.xy[0]=488;
	l7.xy[1]=240;
	l7.xy[2]=496;
	l7.xy[3]=249;
	l7.xy[4]=496;
	l7.xy[5]=269;
	l7.xy[6]=488;
	l7.xy[7]=259;
	fillpoly(4,l7.xy);
	setfillstyle(1,WHITE);
	u9.xy[0]=370;
	u9.xy[1]=196;
	u9.xy[2]=358;
	u9.xy[3]=188;
	u9.xy[4]=339;
	u9.xy[5]=188;
	u9.xy[6]=349;
	u9.xy[7]=196;
	fillpoly(4,u9.xy);
	u8.xy[0]=345;
	u8.xy[1]=196;
	u8.xy[2]=333;
	u8.xy[3]=188;
	u8.xy[4]=314;
	u8.xy[5]=188;
	u8.xy[6]=324;
	u8.xy[7]=196;
	fillpoly(4,u8.xy);
	u7.xy[0]=320;
	u7.xy[1]=196;
	u7.xy[2]=308;
	u7.xy[3]=188;
	u7.xy[4]=289;
	u7.xy[5]=188;
	u7.xy[6]=299;
	u7.xy[7]=196;
	fillpoly(4,u7.xy);
	u3.xy[0]=350;
	u3.xy[1]=176;
	u3.xy[2]=338;
	u3.xy[3]=168;
	u3.xy[4]=319;
	u3.xy[5]=168;
	u3.xy[6]=329;
	u3.xy[7]=176;
	fillpoly(4,u3.xy);
	u2.xy[0]=325;
	u2.xy[1]=176;
	u2.xy[2]=313;
	u2.xy[3]=168;
	u2.xy[4]=294;
	u2.xy[5]=168;
	u2.xy[6]=304;
	u2.xy[7]=176;
	fillpoly(4,u2.xy);
	u1.xy[0]=300;
	u1.xy[1]=176;
	u1.xy[2]=288;
	u1.xy[3]=168;
	u1.xy[4]=269;
	u1.xy[5]=168;
	u1.xy[6]=279;
	u1.xy[7]=176;
	fillpoly(4,u1.xy);
	u4.xy[0]=310;
	u4.xy[1]=186;
	u4.xy[2]=298;
	u4.xy[3]=178;
	u4.xy[4]=279;
	u4.xy[5]=178;
	u4.xy[6]=289;
	u4.xy[7]=186;
	fillpoly(4,u4.xy);
	u5.xy[0]=334;
	u5.xy[1]=186;
	u5.xy[2]=326;
	u5.xy[3]=178;
	u5.xy[4]=304;
	u5.xy[5]=178;
	u5.xy[6]=314;
	u5.xy[7]=186;
	fillpoly(4,u5.xy);
	u6.xy[0]=359;
	u6.xy[1]=186;
	u6.xy[2]=348;
	u6.xy[3]=178;
	u6.xy[4]=329;
	u6.xy[5]=178;
	u6.xy[6]=339;
	u6.xy[7]=186;
	fillpoly(4,u6.xy);
	setfillstyle(1,YELLOW);
	d3.xy[0]=370;
	d3.xy[1]=396;
	d3.xy[2]=358;
	d3.xy[3]=388;
	d3.xy[4]=339;
	d3.xy[5]=388;
	d3.xy[6]=349;
	d3.xy[7]=396;
	fillpoly(4,d3.xy);
	d2.xy[0]=345;
	d2.xy[1]=396;
	d2.xy[2]=333;
	d2.xy[3]=388;
	d2.xy[4]=314;
	d2.xy[5]=388;
	d2.xy[6]=324;
	d2.xy[7]=396;
	fillpoly(4,d2.xy);
	d1.xy[0]=320;
	d1.xy[1]=396;
	d1.xy[2]=308;
	d1.xy[3]=388;
	d1.xy[4]=289;
	d1.xy[5]=388;
	d1.xy[6]=299;
	d1.xy[7]=396;
	fillpoly(4,d1.xy);
	d9.xy[0]=350;
	d9.xy[1]=376;
	d9.xy[2]=338;
	d9.xy[3]=368;
	d9.xy[4]=319;
	d9.xy[5]=368;
	d9.xy[6]=329;
	d9.xy[7]=376;
	fillpoly(4,d9.xy);
	d8.xy[0]=325;
	d8.xy[1]=376;
	d8.xy[2]=313;
	d8.xy[3]=368;
	d8.xy[4]=294;
	d8.xy[5]=368;
	d8.xy[6]=304;
	d8.xy[7]=376;
	fillpoly(4,d8.xy);
	d7.xy[0]=300;
	d7.xy[1]=376;
	d7.xy[2]=288;
	d7.xy[3]=368;
	d7.xy[4]=269;
	d7.xy[5]=368;
	d7.xy[6]=279;
	d7.xy[7]=376;
	fillpoly(4,d7.xy);
	d4.xy[0]=310;
	d4.xy[1]=386;
	d4.xy[2]=298;
	d4.xy[3]=378;
	d4.xy[4]=279;
	d4.xy[5]=378;
	d4.xy[6]=289;
	d4.xy[7]=386;
	fillpoly(4,d4.xy);
	d5.xy[0]=334;
	d5.xy[1]=386;
	d5.xy[2]=326;
	d5.xy[3]=378;
	d5.xy[4]=304;
	d5.xy[5]=378;
	d5.xy[6]=314;
	d5.xy[7]=386;
	fillpoly(4,d5.xy);
	d6.xy[0]=359;
	d6.xy[1]=386;
	d6.xy[2]=348;
	d6.xy[3]=378;
	d6.xy[4]=329;
	d6.xy[5]=378;
	d6.xy[6]=339;
	d6.xy[7]=386;
	fillpoly(4,d6.xy);
	f1.color=f2.color=f3.color=f4.color=f5.color=f6.color=f7.color=f8.color=f9.color=GREEN;
	u1.color=u2.color=u3.color=u4.color=u5.color=u6.color=u7.color=u8.color=u9.color=WHITE;
	r1.color=r2.color=r3.color=r4.color=r5.color=r6.color=r7.color=r8.color=r9.color=6;
	l3.color=l2.color=l1.color=l6.color=l5.color=l4.color=l9.color=l8.color=l7.color=RED;
	d7.color=d8.color=d9.color=d4.color=d5.color=d6.color=d1.color=d2.color=d3.color=YELLOW;
	b1.color=b2.color=b3.color=b4.color=b5.color=b6.color=b7.color=b8.color=b9.color=BLUE;
	int c=0 ;
	opt01.no=opt02.no=opt03.no=opt04.no=opt05.no=opt06.no=opt07.no=opt08.no=opt09.no=opt10.no=opt11.no=opt12.no=0;
	opt01.no=1;
select(opt01,popt01);
unselect(opt02,popt02);
unselect(opt03,popt03);
unselect(opt04,popt04);
unselect(opt05,popt05);
unselect(opt06,popt06);
unselect(opt07,popt07);
unselect(opt08,popt08);
unselect(opt09,popt09);
unselect(opt10,popt10);
unselect(opt11,popt11);
unselect(opt12,popt12);

	char s ;
for (int yy = 1 ; ;yy++ )
{	s=getch();
	if(s==77)
	{	if(opt01.no==1){
		select(opt02,popt02);

		unselect(opt01,popt01);
		}
		else if (opt02.no==1){
		select(opt03,popt03);
		unselect(opt02,popt02);
		}
		else if(opt04.no==1){
		select(opt05,popt05);
		unselect(opt04,popt04);
		}
		else if (opt05.no==1){
		select(opt06,popt06);
		unselect(opt05,popt05);
		}
		else if (opt07.no==1){
		select(opt08,popt08);
		unselect(opt07,popt07);
		}
		else if ( opt08.no==1){
		select(opt09,popt09);
		unselect(opt08,popt08);
		}
		else if (opt10.no==1){
		select(opt11,popt11);
		unselect(opt10,popt10);}
		else if (opt11.no==1){
		select(opt12,popt12);
		unselect(opt11,popt11);
		}
	}
	else if (s=='q')
	{break;}
	else if(s==75)
	{  if(opt02.no==1){
		select(opt01,popt01);

		unselect(opt02,popt02);
		}
		else if (opt03.no==1){
		select(opt02,popt02);
		unselect(opt03,popt03);
		}
		else if(opt05.no==1){
		select(opt04,popt04);
		unselect(opt05,popt05);
		}
		else if (opt06.no==1){
		select(opt05,popt05);
		unselect(opt06,popt06);
		}
		else if (opt08.no==1){
		select(opt07,popt07);
		unselect(opt08,popt08);
		}
		else if ( opt09.no==1){
		select(opt08,popt08);
		unselect(opt09,popt09);
		}
		else if (opt11.no==1){
		select(opt10,popt10);
		unselect(opt11,popt11);}
		else if (opt12.no==1){
		select(opt11,popt11);
		unselect(opt12,popt12);
	 }}
	else if(s==72)
	{  if(opt04.no==1){
		select(opt01,popt01);

		unselect(opt04,popt04);
		}
		else if (opt05.no==1){
		select(opt02,popt02);
		unselect(opt05,popt05);
		}
		else if(opt06.no==1){
		select(opt03,popt03);
		unselect(opt06,popt06);
		}
		else if (opt07.no==1){
		select(opt04,popt04);
		unselect(opt07,popt07);
		}
		else if (opt08.no==1){
		select(opt05,popt05);
		unselect(opt08,popt08);
		}
		else if ( opt09.no==1){
		select(opt06,popt06);
		unselect(opt09,popt09);
		}
		else if (opt10.no==1){
		select(opt07,popt07);
		unselect(opt10,popt10);}
		else if (opt11.no==1){
		select(opt08,popt08);
		unselect(opt11,popt11);}
		else if (opt12.no==1){
		select(opt09,popt09);
		unselect(opt12,popt12);
	 }}
	else if(s==80)
	{  if(opt01.no==1){
		select(opt04,popt04);

		unselect(opt01,popt01);
		}
		else if (opt02.no==1){
		select(opt05,popt05);
		unselect(opt02,popt02);
		}
		else if(opt03.no==1){
		select(opt06,popt06);
		unselect(opt03,popt03);
		}
		else if (opt04.no==1){
		select(opt07,popt07);
		unselect(opt04,popt04);
		}
		else if (opt05.no==1){
		select(opt08,popt08);
		unselect(opt05,popt05);
		}
		else if ( opt06.no==1){
		select(opt09,popt09);
		unselect(opt06,popt06);
		}
		else if (opt07.no==1){
		select(opt10,popt10);
		unselect(opt07,popt07);}
		else if (opt08.no==1){
		select(opt11,popt11);
		unselect(opt08,popt08);}
		else if (opt09.no==1){
		select(opt12,popt12);
		unselect(opt09,popt09);
	 }}
	 else if(s==13)
		{	if(opt01.no==1)
			{ui();}
			else if (opt02.no==1)
			uu();
			else if (opt03.no==1)
			hh();
			else if (opt04.no==1)
			li();
			else if (opt05.no==1)
			rr();
			else if (opt06.no==1)
			ri();
			else if (opt07.no==1)
			ff();
			else if (opt08.no==1)
			fi();
			else if (opt09.no==1)
			bi();
			else if (opt10.no==1)
			bb();
			else if (opt11.no==1)
			dd();
			else if (opt12.no==1)
			di();
			}
	}

	int uuu;
	int fff;
	int rrr;
	int lll;
	int solve =0 ;
	int qwe ;
	int j ;
	int qqq;
ttt :
if(f1.color==f2.color&&f2.color==f3.color &&r1.color==r2.color&&r2.color==r3.color&&l1.color==l2.color&&l3.color==l1.color&&b1.color==b2.color&&b3.color==b1.color&&u1.color==u2.color&&u3.color==u1.color&&u1.color==u5.color){}
else{
for(int i = 1 ;i<= 24;i++)
{if(u1.color==u2.color&&u2.color==u3.color&&u3.color==u4.color&&u4.color==u5.color&&u5.color==u6.color&&u6.color==u7.color&&u7.color==u8.color&&u8.color==u9.color&&f1.color==f2.color&&f2.color==f5.color&&f5.color==f3.color&&l1.color==l2.color&&l2.color==l5.color&&l5.color==l3.color&&b1.color==b2.color&&b2.color==b5.color&&b5.color==b3.color&&r1.color==r2.color&&r2.color==r5.color&&r5.color==r3.color){
  break;

   }else{
	   uuu = u5.color;
	   fff = f5.color;
	   rrr = r5.color;
	   lll = l5.color;
	     for( int m = 1 ;m<= 4 ;m++){
		if( uuu == u6.color && fff == l2.color ){
			 ri();
		    di();
		    mr();
		    dd();
		    rr();
		    di();
		    mr();
		    dd();
		    fi();
		    di();
		    ml();
		    dd();
		    ff();
		    di();
		    ml();
		    dd();
		   //xyz == //xyz & " ri di mr d r di mr d fi di ml d f dimld
		   }else if( uuu == l2.color && fff == u6.color ){
		   ri();
		   ri();
		   md();
		   ri();
		   rr();
		   di();
		   ri();
		   mu();
		   rr();
		   //xyz == //xyz & " ri ri md ri r di ri mu r "
		   }else if( fff == u8.color && uuu == f2.color ){
		   md();
		   di();
		   di();
		   mu();
		   di();
		   md();
		   dd();
		   mu();
		   //xyz == //xyz & " md di di mu di md d mu "
		   }else if( fff == b2.color && uuu == u2.color ){
		   mu();
		   di();
		   di();
		   md();
		   di();
		   di();
		   md();
		   dd();
		   dd();
		   mu();
		   //xyz == //xyz & " mu di di md di di di md d mu "
		   }else if( fff == u2.color && uuu == b2.color ){
		   mu();
		   di();
		   di();
		   md();
		   di();
		   di();
		   md();
		   dd();
		   dd();
		   mu();
		   //xyz == //xyz & " mu di di md di di di md d mu "
		   }else if( fff == r2.color && uuu == u4.color ){
		   hh();
		   ml();
		   li();
		   ml();
		   ff();
		   mr();
		   fi();
		   mr();
		   //xyz == //xyz & " l ml li f mr fi mr "
		   }else if( fff == u4.color && uuu == r2.color ){
		   hh();
		   ml();
		   li();
		   ml();
		   ff();
		   mr();
		   fi();
		   mr();
		   md();
		   di();
		   di();
		   mu();
		   di();
		   md();
		   dd();
		   mu();
		   //xyz == //xyz & " l ml li f mr fi mr md di di mu dimd
		   }else if( fff == f8.color && uuu == d2.color ){
		   md();
		   di();
		   di();
		   mu();
		   //xyz == //xyz & " md di di mu "
		   }else if( fff == d2.color && uuu == f8.color ){
		   di();
		   md();
		   dd();
		   mu();
		   //xyz == //xyz & " di md d mu "
		   }else if( fff == l4.color && uuu == f6.color ){
		   mr();
		   mr();
		   fi();
		   ml();
		   ff();
		   ml();
		   //xyz == //xyz & " mr mr fi ml f ml "
		   }else if( fff == f6.color && uuu == l4.color ){
		   ml();
		   ff();
		   mr();
		   fi();
		   //xyz == //xyz & " ml f mr fi "
		   }else if( fff == f4.color && uuu == r6.color ){
		   mr();
		   fi();
		   ml();
		   ff();
		   //xyz == //xyz & " mr fi ml f "
		   }else if( fff == r6.color && uuu == f4.color ){
		   ml();
		   ml();
		   ff();
		   mr();
		   fi();
		   mr();
		   //xyz == //xyz & " ml ml f mr fi mr "

		   }else if( fff == r3.color && uuu == f1.color && rrr == u7.color ){
		     hh();
		     di();
		     li();
		     dd();
		     hh();
		     di();
		     li();
		     //xyz == //xyz & " l di li d l di di "

		     }else if( uuu == r3.color && fff == u7.color && rrr == f1.color ){
		     fi();
		     dd();
		     ff();
		     hh();
		     dd();
		     li();
		     //xyz == //xyz & " fi d f l d li "
		     }else if( uuu == f7.color && fff == d1.color && rrr == r9.color ){
		     fi();
		     di();
		     ff();
		     //xyz == //xyz & " fi di f "
		     }else if( uuu == d1.color && fff == r9.color && rrr == f9.color ){
		     hh();
		     di();
		     di();
		     li();
		     di();
		     hh();
		     dd();
		     li();
		     //xyz == //xyz & " l di di li di l d li "
		     }else if( uuu == f3.color && fff == u9.color && rrr == l1.color ){
		     ri();
		     dd();
		     rr();
		     di();
		     hh();
		     dd();
		     li();
		     //xyz == //xyz & " ri d r di l d li "
		     }else if( uuu == f9.color && fff == l7.color ){
		     di();
		     hh();
		     dd();
		     li();
		     //xyz == //xyz & " di l d li "
		     }else if( fff == f9.color && uuu == d3.color ){
		     ri();
		     di();
		     di();
		     fi();
		     di();
		     ff();
		     //xyz == //xyz & " ri di di fi di f "
		     }else if( l1.color == fff && f3.color == rrr ){
		     ri();
		     dd();
		     rr();
		     //xyz == //xyz & " ri d r "
		     }else if( uuu == l1.color && fff == f3.color ){
		     ri();
		     dd();
		     rr();
		     //xyz == //xyz & " ri d r "
		     }else if( fff == u9.color && uuu == f3.color ){
		     ri();
		     dd();
		     rr();
		     //xyz == //xyz & " ri d r "
		     }else if( uuu == f3.color && rrr == l3.color || b3.color == uuu && rrr == f3.color || fff == f3.color && uuu == l3.color ){
		     bi();
		     dd();
		     bb();
		     //xyz == //xyz & " bi d b "
		     }else if( uuu == u1.color && fff == r1.color || u1.color == fff && b1.color == uuu || u1.color == rrr && r1.color == uuu ){
		     bb();
		     di();
		     bi();
		     //xyz == //xyz & " b di bi"
		     }else if( u7.color == rrr && r3.color == fff || uuu == r3.color && f1.color == rrr ){
		     hh();
		     di();
		     li();
		     //xyz == //xyz & " l di li "

		   }
		di();
		mr();
		//xyz == //xyz & " di mr "

	    }// m

	uu();
	di();
	mr();
	//xyz == //xyz & " u di mr "
     }}
// i
rr();
rr();
li();
li();
md();
md();
//---------------------------------------------------FIRST L:LAYER----------------------------------------------------------------------------------------------------------------------------------------------------------
//xyz == //xyz & " invert teh cube "
for(  i = 1; i <=  60;i++){
if( f4.color == f5.color && f5.color == f6.color && l4.color == l5.color && l5.color == l6.color && r4.color == r5.color && r5.color == r6.color && b4.color == b5.color && b5.color == b6.color ){
break;
}else{
   for( int j = 1 ; j <= 4 ; j++){



   if( f2.color == f5.color && u8.color == l5.color ){
   //xyz == //xyz & "u r ui ri ui fi u f"
   uu();
   rr();
   ui();
   ri();
   ui();
   fi();
   uu();
   ff();
   }else if( f2.color == l5.color && u8.color == f5.color ){
   di();
   mr();
   //xyz == //xyz & " di mr "
   //xyz == //xyz & " ui li u l u f ui fi"
   ui();
   li();
   uu();
   hh();
   uu();
   ff();
   ui();
   fi();
   dd();
   ml();
   //xyz == //xyz & "  d ml "
   }else if( f5.color == l4.color && l5.color == f6.color ){
   //xyz == //xyz & "u r ui ri ui fi u f"
   uu();
   rr();
   ui();
   ri();
   ui();
   fi();
   uu();
   ff();
   }else if( f5.color == b6.color && l5.color == l6.color || l5.color == b6.color && f5.color == l6.color ){
   uu();
   di();
   mr();
   //xyz == //xyz & " u di mr u r ui ri ui fi u f ui dd ml"
   uu();
   rr();
   ui();
   ri();
   ui();
   fi();
   uu();
   ff();
   ui();
   dd();
   ml();
   }else if( f5.color == r4.color && l5.color == b4.color || r4.color == l5.color && f5.color == b4.color ){
   uu();
   di();
   mr();
   uu();
   di();
   mr();
   rr();
   ui();
   ri();
   ui();
   fi();
   uu();
   ff();
   ui();
   dd();
   ml();
   ui();
   dd();
   ml();

   //xyz == //xyz & " u di mr u di mr u r ui ri ui fi u f ui dd ml ui dd ml "
   }else if( f5.color == r6.color && r5.color == f4.color ){
    uu();
   di();
   mr();
    uu();
   di();
   mr();
    uu();
   di();
   mr();
   uu();
   rr();
   ui();
   ri();
   ui();
   fi();
   uu();
   ff();
   ui();
   dd();
   ml();
   ui();
   dd();
   //xyz == //xyz & " u di mr u di mr u di mr u r ui ri ui fi u f ui dd ml ui dd ml ui dd ml "
   ml();
  }
   uu();
   //xyz == //xyz & " u  "

   }// j
   }
   uu();
   di();
   mr();
   //xyz == //xyz & " u di mr "

//--------------------------------------------------SECOND LAYER----------------------------------------------------
   }// i
      for(  i = 1 ;i<= 4; i++){
   for(  j = 1 ;j<=6;j++){
   if( u2.color == u5.color && u5.color == u8.color && u5.color == u4.color && u5.color == u6.color ){
   break;

   }else if( u2.color != u5.color && u4.color != u5.color && u5.color != u6.color && u5.color != u8.color ){
   ff();
   rr();
   uu();
   ri();
   ui();
   fi();
   //xyz == //xyz & " f r u ri ui fi "

   }else if( u2.color == u5.color && u5.color == u4.color && u5.color != u6.color && u5.color != u8.color ){
   ff();
   rr();
   uu();
   ri();
   ui();
   rr();
   uu();
   ri();
   ui();
   fi();
   qqq = 1;
   //xyz == //xyz & " f r u ri ui r u ri ui fi "
   }else if( u5.color == u6.color && u6.color == u4.color ){
   ff();
   rr();
   uu();
   ri();
   ui();
   fi();
   //xyz == //xyz & " f r u ri ui fi "
   qqq = 1;
   }else if( j == 5 && u2.color != u5.color && u4.color != u5.color && u5.color != u6.color && u5.color != u8.color ){
   ff();
   rr();
   uu();
   ri();
   ui();
   fi();
   //xyz == //xyz & " f r u ri ui fi "
   }
   ui();
   //xyz == //xyz & " ui "
   }// j
  }// i
   for(  i = 1 ;i<= 10;i++){
 if( u5.color == u1.color && u5.color == u2.color && u5.color == u7.color && u7.color == u9.color ){
 break;
 }else{
 for(  j = 1 ; j <= 50;j++){
 if( u5.color == u1.color && u5.color == u2.color && u5.color == u7.color && u7.color == u9.color ){
 break;
 }else if( u5.color == u7.color && u5.color != u1.color && u5.color != u3.color ){
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " r u ri u r u u ri "
 }else if( u5.color != u1.color && u5.color != u3.color && u5.color != u7.color && u5.color != u9.color && r1.color == u5.color && r3.color == u5.color ){
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " r u ri u r u u ri "
 }else if( u5.color != u1.color && u5.color != u3.color && u5.color != u7.color && u5.color != u9.color && f1.color == u5.color && f3.color == u5.color ){
 uu();
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " u r u ri u r u u ri "
 }else if( u5.color != u1.color && u5.color != u3.color && u5.color != u7.color && u5.color != u9.color && l1.color == u5.color && l3.color == u5.color ){
 uu();
 uu();
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " u u r u ri u r u u ri "
 }else if( u5.color != u1.color && u5.color != u3.color && u5.color != u7.color && u5.color != u9.color && b1.color == u5.color && b3.color == u5.color ){
 ui();
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " ui r u ri u r u u ri "
 }else if( u3.color == u5.color && u5.color == u9.color && u5.color == f1.color && u5.color == f3.color ){
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & "  r u ri u r u u ri "
 }else if( u3.color == u5.color && u5.color == u9.color && u5.color == r1.color && u5.color == r3.color ){
 ui();
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " ui r u ri u r u u ri "
 }else if( u3.color == u5.color && u1.color == u5.color && r3.color == u5.color && l1.color == u5.color ){

 uu();
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " u r u ri u r u u ri "
 }else if( u1.color == u5.color && u5.color == u9.color && u5.color == b3.color ){
 ui();
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " ui r u ri u r u u ri "
 }else if( u1.color == u5.color && u5.color == u9.color && u5.color == l3.color ){
 uu();
 rr();
 uu();
 ri();
 uu();
 rr();
 uu();
 uu();
 ri();
 //xyz == //xyz & " u r u ri u r u u ri "
 }
 uu();
 }// j
 uu();
 di();
 mr();
 //xyz == //xyz & " u di mr "
 }

 }// i
 // --------------------------------------TOP COLOR CROSS+FILL--------------------------------------
int d=0;
if(f1.color==f3.color&&f3.color==f5.color)
d=1;
if(l1.color==l3.color&&l3.color==l5.color)
d=1;
if(r1.color==r3.color&&r3.color==r5.color)
d=1;
if(b1.color==b3.color&&b3.color==b5.color)
d=1;
if(d!=1){
ri();
ff();
ri();
bb();
bb();
rr();
fi();
ri();
bb();
bb();
ri();
ri();
ui();
}
int y=0;
for(j=1;j<8;j++)
{ di();mr();
for(i=1;i<5;i++)
{if(b1.color==b3.color&&b3.color==b5.color)
{ i=6;j=15; }
else
uu();}      }

ri();
ff();
ri();
bb();
bb();
rr();
fi();
ri();
bb();
bb();
ri();
ri();
ui();

for(i=1 ;i<= 4;i++){

if( b2.color == b5.color&&b5.color==b3.color ){
 qwe = 1;
i=5;
}else{
uu();
di();
mr();
//xyz == //xyz & " u di mr "
}
}
if( qwe != 1 ){
ff();
ff();
ui();
ri();
hh();
ff();
ff();
rr();
li();
ui();
ff();
ff();
//xyz == //xyz & " f f ui ri l f f r li ui f f "
}
for(i = 1 ;i<= 4;i++){
if( b2.color == b5.color ){
qwe = 1;
i=5;
}else{
uu();
di();
mr();
//xyz == //xyz & " u di mr "
}
}// i
if( f2.color == l5.color ){
ff();
ff();
ui();
ri();
hh();
ff();
ff();
rr();
li();
ui();
ff();
ff();
//xyz == //xyz & " f f ui ri l f f r li ui f f "
}else if( f2.color == r5.color ){
ff();
ff();
uu();
ri();
hh();
ff();
ff();
rr();
li();
uu();
ff();
ff();
//xyz == //xyz & " f f uu ri l f f r li uu f f "
}  }
fff=f5.color;
rrr=r5.color;
lll=l5.color;
int bbb=b5.color;
uuu=u5.color;

if(f1.color==f2.color&&f2.color==f3.color &&r1.color==r2.color&&r2.color==r3.color&&l1.color==l2.color&&l3.color==l1.color&&b1.color==b2.color&&b3.color==b1.color&&u1.color==u2.color&&u3.color==u1.color&&u1.color==u5.color){}
else{
u1.color=u2.color=u3.color=u4.color=u5.color=u6.color=u7.color=u8.color=u9.color=uuu;
f1.color=f2.color=f3.color=fff;
l1.color=l2.color=l3.color=lll;
b1.color=b2.color=b3.color=bbb;
r1.color=r2.color=r3.color=rrr;
setfillstyle(1,uuu);
fillpoly(4,u1.xy);
fillpoly(4,u2.xy);
fillpoly(4,u3.xy);
fillpoly(4,u4.xy);
fillpoly(4,u5.xy);
fillpoly(4,u6.xy);
fillpoly(4,u7.xy);
fillpoly(4,u8.xy);
fillpoly(4,u9.xy);
setfillstyle(1,rrr);
fillpoly(4,r1.xy);
fillpoly(4,r2.xy);
fillpoly(4,r3.xy);
setfillstyle(1,lll);
fillpoly(4,l1.xy);
fillpoly(4,l2.xy);
fillpoly(4,l3.xy);
setfillstyle(1,bbb);
fillpoly(4,b1.xy);
fillpoly(4,b2.xy);
fillpoly(4,b3.xy);
setfillstyle(1,fff);
fillpoly(4,f1.xy);
fillpoly(4,f2.xy);
fillpoly(4,f3.xy);

}

getch();




// mmm




	getch();
	}


