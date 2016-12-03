#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
int state,moves,neg=0;
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
int xx=0;
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
	swap(u4,u2); delay(xx);
	if(state==1)
		moves++;
	else
	neg++;

	cout<<moves<<" " ;
	}
void uu()
	{for (int i = 1; i<4;i++)
	 ui();       delay(xx);
	 if(state==1)
	 {
		moves--;
		moves--;
	 }
	 else
	 neg--;

	cout<<moves<<" ";
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
	swap(r2,r4); delay(xx);
	if(state==1)
		moves++;
	else neg--;
	cout<<moves<<" ";
	}

void li()
	{//LEFT UP
	for (int i = 1 ; i<4; i++)
	hh();        delay(xx);
	if(state==1)
	{
		moves--;
		moves--;
	}
	else
	neg-=2;

	cout<<moves<<" ";

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
	swap(l2,l4); delay(xx);
	if(state==1)
		moves++;
	else
	neg++;

	cout<<moves<<" ";

	}
void ri()
	{//Right down
	for(int i = 1 ; i<4 ; i++ )
	rr();        delay(xx);
	if(state==1)
	{
		moves--;
		moves--;
	}
	else
	neg-=2;

	cout<<moves<<" "  ;

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
	 swap(u7,r9);delay(xx);
	if(state==1)
		moves++;
	else neg++;

	cout<<moves<<" ";
	 }
void fi()
{    // front left
	for(int i = 1 ; i<4; i++)
	ff();        delay(xx);

	if(state==1)
		moves++;


	else
	neg-=2;

	cout<<moves<<" ";

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
	swap(u3,r1); delay(xx);
	if(state==1)
	{
		moves++;
	}
	else
	neg++;

	cout<<moves<<" " ;

	}
void bb()
	{ //back left
	for(int i =1; i<4;i++)
	bi();        delay(xx);
	if(state==1)
	{
		moves--;
		moves--;
	}
	else neg-=2;

	cout<<moves ;
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
	 swap(f9,r9);delay(xx);
	 if(state==1)
	{
		moves++;
	}
	else
	neg++;

	cout<<moves<<" ";

	 }
void di()
	{for(int i = 1;i<4;i++)
	dd();
	//down left  delay(20);
	if(state==1)
	{
		moves--;
		moves--;
	}
	else
	neg-=2;

	cout<<moves   ;

	}
void mu();
void md()
	{//middle down
	for(int i = 1; i<4 ; i++)
	mu();        delay(xx);

	if(state==1)
	{
		moves--;
		moves--;
	}
	else
	neg-=2;

	cout<<moves<<" ";

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
	swap(f8,d8); delay(xx);
	if(state==1)
	{
		moves++;
	}
	else
	neg++;

	cout<<moves<<" " ;
	}
void ml();
void mr()
	{ml();
	state=0;
	 ml();
	 ml(); delay(xx);
	 state=1;

	cout<<moves<<" " ;
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
	if(state==1)
	{
		moves--;
		moves--;
	}
	else
	{neg++;
	}

	cout<<moves<<" " ;

	}
void flj()
{
	fi();uu();ff();

}
void frj()
{
	ff();ui();fi();
}
void blj()
{
	bb();uu();bi();
}
void brj()
{
	bi();ui();bb();
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
int ckk()
{
	cout<<"\n YES ! ";
	if(((f5.color!=f8.color)||(d5.color!=d2.color))||((d5.color!=d4.color)||(r8.color!=r5.color))||((d5.color!=d8.color)||(b8.color!=b5.color))||((d5.color!=d6.color)||(l8.color!=l5.color)))
		return 1;
	else
		return 0;

}
int solved()
{
	int fc=f1.color;
	int uc=u1.color;
	int dc=d1.color;
	int rc=r1.color;
	int lc=l2.color;
	int bc=b1.color;

	if(f2.color==fc &&f3.color==fc &&f4.color==fc && f5.color==fc && f6.color==fc && f7.color==fc && f8.color==fc && f9.color==fc && b2.color==bc &&b3.color==bc && b4.color==bc && b5.color==bc && b6.color==bc && b7.color==bc && b8.color==bc &&  b9.color==bc && d2.color==dc && d3.color==dc && d4.color==dc && d5.color==dc && d6.color==dc && d7.color==dc &&  d8.color==dc && d9.color==dc && u2.color==uc && u3.color==uc && u4.color==uc && u5.color==uc && u5.color==uc && u6.color==uc &&  u7.color==uc && u8.color==uc && u9.color==uc && r2.color==rc && r3.color==rc &&  r4.color==rc && r5.color==rc && r6.color==rc && r7.color==rc && r8.color==rc && r9.color==rc &&  l2.color==lc&& l3.color==lc&& l4.color==lc&& l5.color==lc&& l6.color==lc&& l7.color==lc&& l8.color==lc&& l9.color==lc )
		return 1;
	else
		return 0 ;

}
int solved_2()
{
	if(f5.color==f4.color&&f4.color==f6.color&&r5.color==r4.color&&r5.color==r6.color&&l5.color==l4.color&&l5.color==l6.color&&b5.color==b6.color&&b5.color==b4.color&&f5.color==f7.color&&f5.color==f9.color&&l9.color==l5.color&&l7.color==l5.color&&r9.color==r5.color&&r5.color==r7.color&&b9.color==b7.color&&b7.color==b5.color)
		return 1;
	else
		return 0;
}
int solved_1()
	{
		if(d2.color==d5.color && d4.color==d5.color && d6.color==d5.color && d8.color==d5.color && f8.color==f5.color && r8.color==r5.color && l8.color==l5.color && b8.color==b5.color)
			return 1;
		else
			return 0;
	}
void main ()
	{       clrscr();
	int gd,gm ;
	gd=DETECT;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
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
		else if(s=='w')
			mu();
		else if(s=='s')
			md();
		else if(s=='d')
			ml();
		else if(s=='a')
			mr();
	}

	moves=0;
	state=0;
	neg=0;
/*-----------------------------------------------ALGORITHM STARTS -----------------------
checking if the cube is solved*/
	if(!solved())
	{   //IF THE CUBE IS NOT SOLVED
//-----------------------------------------------BOTTOM CROSS LOGIC BEGINS-------------------
	cout<<"WILL GET IN/n " ;
	if(!solved_1())
	{
		cout<<"will solve";
		for(int ji=0;ji<4;ji++)
		{
		for(int ij=0;ij<4;ij++)
		{
	state=1;
		if((f6.color==f5.color)&&(l4.color==d5.color))
			{
			ff();}
		else if((f5.color==d2.color)&&(d5.color==f8.color))
			{
			ff();ff();uu();mu();ui();md();
			}
		else if((d5.color==f6.color)&&(l4.color==f5.color))
			{fi();ui();mu();uu();md();}
		else if((f4.color==f5.color)&& (r6.color==d5.color))
			fi();
		else if((d5.color==f4.color) && (r6.color==f5.color))
			{
			ff();ui();mu();uu();md();
			}
		else if((f5.color==f2.color)&&(u8.color==d5.color))
			{
			ff();ff();
			}
		else if((f2.color==d5.color)&&(u8.color==f5.color))
			{
			ui();mu();uu();md();
			}
		else if((r8.color==d5.color)&&(d4.color==f5.color))
			{
			li();fi();
			}
		else if((r8.color==f5.color)&&(d4.color==d5.color))
			{
			li();li();ui();mu();ui();ui();md();
			}
		else if((b8.color==d5.color)&&(d8.color==f5.color))
			{
			bb();bb();uu();mu();uu();md();
			}
		else if((b8.color==f5.color)&&(d8.color==d5.color))
			{
			md();uu();mu();mu();uu();md();
			}
		else if((l8.color==d5.color)&&(d6.color==f5.color))
			{
			rr();ff();
			}
		 else if((l8.color==f5.color)&&(d6.color==d5.color))
			{
			rr();rr();uu();mu();uu();uu();md();
			}
		 else if((l6.color==d5.color)&&(f5.color==b6.color))
			{
			mu();bb();md();uu();mu();ui();md();
			}
		 else if((l6.color==f5.color)&&(b6.color==d5.color))
			{
			mu();bb();uu();uu();md();
			}
		 else if((r4.color==d5.color)&&(b4.color==f5.color))
			{
			mu();bi();md();ui();mu();uu();md();
			}
		 else if((r4.color==f5.color)&&(b4.color==d5.color))
			{
			mu();bi();ui();ui();md();
			}
	state=0;
		 uu();
		 }
		 uu();mr();di();
		 }
	}
	if(ckk())
		cout<<"cross fault";
	//delay(5000);
	xx=0;
	//first step (cross) solved
	//step 2 solving
	for(int jji=0;jji<20;jji++)
	{
	state=1;
	if(((d5.color==f7.color)||(d5.color==r9.color)||(d5.color==d1.color))&&(f7.color!=f5.color))
		{
		frj();
		if(ckk())
		cout<<"mofo";
		}
	if(((d5.color==b7.color)||(d5.color==r7.color)||(d5.color==d7.color))&&(r5.color!=r7.color))
		{
		brj();
		if(ckk())
		cout<<"mofo";
		}
	if(((d5.color==b9.color)||(d5.color==d9.color)||(d5.color==l9.color))&&(l5.color!=l9.color))
		{
		blj();
		if(ckk())
		cout<<"mofo";
		}
	if(((l5.color==f4.color)&&(f5.color==r6.color))||((f5.color==f4.color)&&(l5.color==r6.color)))
		{
		frj();
		if(ckk())
		cout<<"mofo";
		}
	if(((l5.color==r4.color)&&(f5.color==b4.color))||((f5.color==r4.color)&&(l5.color==b4.color)))
		{
		brj();
		if(ckk())
		cout<<"mofo";
		}
	if(((l5.color==l6.color)&&(f5.color==b6.color))||((f5.color==l6.color)&&(l5.color==b6.color)))
		{
		blj();
		if(ckk())
		cout<<"mofo";
		}
	if(solved_2())
		{
		break;
		}
	state=0;

	for(int ijj=0;ijj<4;ijj++)
	{
		state=1;
		if(f5.color==f6.color&&f5.color==f9.color&&l5.color==l4.color&&l5.color==l7.color&&d5.color==d3.color)
			break;
		if((f3.color==f5.color)&&(l1.color==d5.color)&&(u9.color==l5.color)&&(u2.color==f5.color)&&(b2.color==l5.color))
		{
		rr();uu();ri();
		if(ckk())
		cout<<"1253";
		}
		else if((f3.color==d5.color)&&(l1.color==l5.color)&&(u9.color==f5.color)&&(l2.color==l5.color)&&(u6.color==f5.color))
		{
		uu();rr();ui();ri();
		if(ckk())
		cout<<"1259";
		}
		else if((f3.color==d5.color)&&(u9.color==f5.color)&&(l1.color==l5.color)&&(r2.color==f5.color)&&(u4.color==l5.color))
		{
		fi();ui();ff();
		if(ckk())
		cout<<"1265";
		}
		else if((f3.color==f5.color)&&(l1.color==d5.color)&&(u9.color==l5.color)&&(f2.color==f5.color)&&(u8.color==l5.color))
		{
		ui();fi();uu();ff();
		if(ckk())
		cout<<"1271";
		}
		else if((f5.color==f9.color)&&(l7.color==l5.color)&&(d3.color==d5.color)&&((u8.color==l5.color)&&(f2.color==f5.color)||(u8.color==f5.color)&&(l5.color==f2.color)))
		{
		uu();rr();ui();ri();ui();fi();uu();ff();
		if(ckk())
		cout<<"1277";
		}
		else if((f5.color==f9.color)&&(l7.color==l5.color)&&(d3.color==d5.color)&&(((l2.color==l5.color)&&(u6.color==f5.color))||((l2.color==f5.color)&&(l5.color==u6.color))))
		{
		ui();fi();uu();ff();uu();ri();ui();rr();
		if(ckk())
		cout<<"1283";
		}
		else if((((l5.color==u8.color)&&(f5.color==f2.color))||((l5.color==f2.color)&&(u8.color==f5.color)))&&(l5.color==f9.color)&&(d5.color==l7.color)&&(d3.color==f5.color))
		{
		fi();uu();ff();ui();fi();uu();ff();
		if(ckk())
		cout<<"1289";
		}
		else if((((f5.color==u6.color)&&(l5.color==l2.color))||((f5.color==l2.color)&&(u6.color==l5.color)))&&(l5.color==d9.color)&&(l7.color==d5.color)&&(f5.color==d3.color))
		{
		rr();uu();ri();ui();rr();uu();ri();
		if(ckk())
		cout<<"1295";
		}
		else if((((f5.color==u6.color)&&(l5.color==l2.color))||((f5.color==l2.color)&&(u6.color==l5.color)))&&(f5.color==l7.color)&&(d5.color==f9.color)&&(f5.color==l7.color))
		{
		rr();ui();ri();uu();rr();ui();ri();
		if(ckk())
		cout<<"1301";
		}
		else if((f5.color==l7.color)&&(d5.color==f9.color)&&(l5.color==d3.color)&&(((l5.color==u8.color)&&(f5.color==f2.color))||((l5.color==f2.color)&&(u8.color==f5.color))))
		{
		fi();ui();ff();uu();fi();ui();ff();
		if(ckk())
		cout<<"1307";
		}
		else if((l5.color==l4.color)&&(f5.color==f6.color)&&(f5.color==l1.color)&&(l5.color==f3.color)&&(d5.color==u9.color))
		{
		rr();uu();ri();ui();rr();uu();ri();ui();rr();uu();ri();
		if(ckk())
		cout<<"1313";
		}
		else if((f5.color==l1.color)&&(f5.color==l4.color)&&(l5.color==f3.color)&&(l5.color==f6.color)&&(d5.color==u9.color))
		{
		rr();ui();ri();ml();dd();ri();uu();rr();mr();di();  //ml()dd() = d
		if(ckk())
		cout<<"1319";
		}
		else if((f5.color==f6.color)&&(f5.color==f3.color)&&(l5.color==u9.color)&&(l5.color==l4.color)&&(d5.color==l1.color))
		{
		uu();fi();uu();ff();uu();fi();uu();uu();ff();
		if(ckk())
		cout<<"1325";
		}
		else if((f5.color==f3.color)&&(f5.color==l4.color)&&(l5.color==f6.color)&&(l5.color==u9.color)&&(d5.color==l1.color))
		{
		uu();fi();ui();ff();mr();di();ff();uu();fi();ml();dd();
		if(ckk())
		cout<<"1331";
		}
		else if((f5.color==f6.color)&&(l5.color==l4.color)&&(f5.color==u9.color)&&(l5.color==l1.color)&&(d5.color==f3.color))
		{
		ui();rr();ui();ri();ui();rr();uu();uu();ri();
		if(ckk())
		cout<<"1337";
		}
		else if((f5.color==l4.color)&&(l5.color==f6.color)&&(l5.color==l1.color)&&(f5.color==u9.color)&&(d5.color==u3.color))
		{
		ui();rr();uu();ri();ml();dd();ri();ui();rr();mr();di();
		if(ckk())
		cout<<"1343";
		}
		else if((f5.color==f3.color)&&(l5.color==u9.color)&&((l5.color==u6.color)||(l5.color==l2.color))&&((f5.color==l2.color)||(f5.color==u6.color))&&(d5.color==l1.color))
		{
		rr();ui();ri();uu();ml();dd();ri();ui();rr();mr();di();
		if(ckk())
		cout<<"1349";
		}
		else if(((f5.color==u8.color)||(f5.color==f2.color))&&(f5.color==u9.color)&&((l5.color==f2.color)||(l5.color==u8.color))&&(l5.color==l1.color)&&(d5.color==f3.color))
		{
		fi();uu();ff();ui();mr();di();ff();uu();fi();ml();dd();
		if(ckk())
		cout<<"1355";
		}
		else if((f5.color==f3.color)&&(f5.color==b2.color||f5.color==u2.color)&&(l5.color==u9.color)&&(l5.color==u2.color||l5.color==b2.color)&&(d5.color==l1.color))
		{
		uu();fi();uu();uu();ff();uu();fi();uu();uu();ff();
		if(ckk())
		cout<<"1361";
		}
		else if((f5.color==u9.color)&&(f5.color==u4.color||f5.color==r2.color)&&(l5.color==r2.color||l5.color==u4.color)&&(l5.color==l1.color)&&(d5.color==f3.color))
		{
		ui();rr();uu();uu();ri();ui();rr();uu();uu();ri();
		if(ckk())
		cout<<"1367";
		}
		else if((l5.color==u4.color||l5.color==r2.color)&&(f5.color==r2.color||f5.color==u4.color)&&(f5.color==f3.color)&&(l5.color==u9.color)&&(d5.color==l1.color))
		{
		uu();fi();ui();ff();uu();fi();uu();uu();ff();
		if(ckk())
		cout<<"1373";
		}
		else if((f5.color==u9.color)&&(l5.color==u2.color||l5.color==b2.color)&&(f5.color==u2.color||f5.color==b2.color)&&(l5.color==l1.color)&&(d5.color==f3.color))
		{
		ui();rr();uu();ri();ui();rr();uu();uu();ri();
		if(ckk())
		cout<<"1379";
		}
		else if((f5.color==f3.color)&&(f5.color==u6.color||f5.color==l2.color)&&(l5.color==l2.color||l5.color==u6.color)&&(l5.color==u9.color)&&(d5.color==l1.color))
		{
		ui();rr();ui();ri();uu();rr();uu();rr();
		if(ckk())
		cout<<"1385";
		}
		else if((f5.color==u9.color)&&(f5.color==f2.color||f5.color==u8.color)&&(l5.color==u8.color||l5.color==f2.color)&&(l5.color==l1.color)&&(d5.color==f3.color))
		{
		uu();fi();uu();ff();ui();fi();ui();ff();
		if(ckk())
		cout<<"1391";
		}
		else if((f5.color==f3.color)&&(f5.color==u4.color||f5.color==r2.color)&&(l5.color==r2.color||l5.color==u4.color)&&(l5.color==u9.color)&&(d5.color==l1.color))
		{
		ui();rr();uu();ri();uu();rr();uu();ri();
		if(ckk())
		cout<<"1397";
		}
		else if((f5.color==u9.color)&&(f5.color==b2.color||f5.color==u2.color)&&(l5.color==u2.color||l5.color==b2.color)&&(l5.color==l1.color)&&(d5.color==f3.color))
		{
		uu();fi();ui();ff();ui();fi();ui();ff();
		if(ckk())
		cout<<"1403";
		}
		else if((f5.color==u8.color||f5.color==f2.color)&&(f5.color==u3.color)&&(l5.color==f2.color||l5.color==u8.color)&&(l5.color==u9.color)&&(d5.color==l1.color))
		{
		uu();fi();uu();uu();ff();ui();rr();uu();ri();
		if(ckk())
		cout<<"1409";
		}
		else if((f5.color==l2.color||f5.color==u6.color)&&(f5.color==u9.color)&&(l5.color==u6.color||l5.color==l2.color)&&(l5.color==l1.color)&&(d5.color==f3.color))
		{
		ui();rr();uu();uu();ri();uu();fi();ui();ff();
		if(ckk())
		cout<<"1415";

		}
		else if((f5.color==u8.color||f5.color==f2.color)&&(f5.color==l1.color)&&(l5.color==f2.color||l5.color==u8.color)&&(l5.color==f3.color)&&(d5.color==u9.color))
		{
		rr();uu();ri();ui();ui();rr();uu();ri();ui();rr();uu();ri();
		if(ckk())
		cout<<"1421";
		}
		else if((f5.color==l1.color)&&(f5.color==l2.color||f5.color==u6.color)&&(l5.color==f3.color)&&(l5.color==u6.color||l5.color==l2.color)&&(d5.color==u9.color))
		{
		ml();dd();ui();ri();ui();rr();uu();uu();ri();ui();rr();uu();ri();ui();rr();mr();di();uu();
		if(ckk())
		cout<<"1427";
		}
		else if((f5.color==l1.color)&&(f5.color==u4.color||f5.color==r2.color)&&(l5.color==f3.color)&&(l5.color==r2.color||l5.color==u4.color)&&(d5.color==u9.color))
		{
		uu();uu();rr();uu();ri();uu();rr();ui();ri();
		if(ckk())
		cout<<"1433";
		}
		else if((f5.color==l1.color)&&(f5.color==b2.color||f5.color==u2.color)&&(l5.color==f3.color)&&(l5.color==u2.color||l5.color==b2.color)&&(d5.color==u9.color))
		{
		uu();uu();fi();ui();ff();ui();fi();uu();ff();
		if(ckk())
		cout<<"1439";
		}
		else if((f5.color==l1.color)&&(f5.color==u2.color||f5.color==b2.color)&&(l5.color==f3.color)&&(l5.color==b2.color||l5.color==u2.color)&&(d5.color==u9.color))
		{
		uu();rr();uu();uu();ri();uu();rr();ui();ri();
		if(ckk())
		cout<<"1445";
		}
		else if((f5.color==l1.color)&&(f5.color==r2.color||f5.color==u4.color)&&(l5.color==f3.color)&&(l5.color==u4.color||l5.color==r2.color)&&(d5.color==u9.color))
		{
		ui();fi();uu();uu();ff();ui();fi();uu();ff();
		if(ckk())
		cout<<"1451";
		delay(5000);
		}
		else if((f5.color==u6.color||f5.color==l2.color)&&(f5.color==l1.color)&&(l5.color==f3.color)&&(l5.color==l2.color||l5.color==u6.color)&&(d5.color==u9.color))
		{
		rr();uu();uu();ri();ui();rr();uu();ri();
		if(ckk())
		cout<<"1457";
		}
		else if((f5.color==f2.color||f5.color==u8.color)&&(f5.color==l1.color)&&(l5.color==u8.color||l5.color==f2.color)&&(l5.color==f3.color)&&(d5.color==u9.color))
		{
		fi();uu();uu();ff();uu();fi();ui();ff();
		if(ckk())
		cout<<"1463";
		}
		else if((f5.color==l4.color)&&(l5.color==f6.color)&&(l5.color==l7.color)&&(f5.color==f9.color)&&(d5.color==d3.color))
		{
		rr();ui();ri();ml();dd();ri();uu();uu();rr();uu();ri();uu();uu();rr();mr();di();
		if(ckk())
		cout<<"1469";
		}
		else if((f5.color==f6.color)&&(f5.color==d3.color)&&(l5.color==l4.color)&&(l5.color==f9.color)&&(d5.color==l7.color))
		{
		rr();ui();ri();uu();rr();uu();uu();ri();uu();rr();ui();ri();
		if(ckk())
		cout<<"1475";
		}
		else if((f5.color==f6.color)&&(l5.color==l4.color)&&(l5.color==d3.color)&&(f5.color==l7.color)&&(d5.color==f9.color))
		{
		rr();ui();ri();ui();rr();uu();ri();ui();rr();uu();uu();ri();
		if(ckk())
		cout<<"1481";
		}
		else if((f5.color==l4.color)&&(l5.color==f6.color)&&(l5.color==f9.color)&&(f5.color==d3.color)&&(d5.color==l7.color))
		{
		rr();uu();ri();ui();rr();ui();ri();uu();ml();dd();ri();ui();rr();mr();di();
		if(ckk())
		cout<<"1487";
		}
		else if((f5.color==l4.color)&&(f5.color==l7.color)&&(l5.color==f6.color)&&(l5.color==d3.color)&&(d5.color==f9.color))
		{
		rr();ui();ri();ml();dd();ri();ui();rr();ui();ri();ui();rr();mr();di();
		if(ckk())
		cout<<"1493";
		}
	uu();
	moves--;
	if(((d5.color==f7.color)||(d5.color==r9.color)||(d5.color==d1.color))&&(f7.color!=f5.color))
		{
		frj();
		if(ckk())
		cout<<"mofo";
		}
	if(((d5.color==b7.color)||(d5.color==r7.color)||(d5.color==d7.color))&&(r5.color!=r7.color))
		{
		brj();
		if(ckk())
		cout<<"mofo";
		}
	if(((d5.color==b9.color)||(d5.color==d9.color)||(d5.color==l9.color))&&(l5.color!=l9.color))
		{
		blj();
		if(ckk())
		cout<<"mofo";
		}
	if(((l5.color==f4.color)&&(f5.color==r6.color))||((f5.color==f4.color)&&(l5.color==r6.color)))
		{
		frj();
		if(ckk())
		cout<<"mofo";
		}
	if(((l5.color==r4.color)&&(f5.color==b4.color))||((f5.color==r4.color)&&(l5.color==b4.color)))
		{
		brj();
		if(ckk())
		cout<<"mofo";
		}
	if(((l5.color==l6.color)&&(f5.color==b6.color))||((f5.color==l6.color)&&(l5.color==b6.color)))
		{
		blj();
		if(ckk())
		cout<<"mofo";
		}
	}
	state=0;
	ml();dd();ui();
	}
	}
	//-------------------------------------secOND LAYER SOLVED-----------------------------------------------------------------------------
	//TOP COLOUR STARTS HERE
	state=0;
		if((u5.color==f2.color)&&(u5.color==l1.color)&&(u5.color==l2.color)&&(u5.color==l3.color)&&(u5.color==r1.color)&&(u5.color==r2.color)&&(u5.color==r3.color)&&(u5.color==b2.color))
		{
		rr();uu();bi();md();hh();uu();md();md();hh();hh();md();hh();ri();ui();ri();ff();rr();fi();mu();mu();rr();rr();li();li();  cout<<"THIS MESSED UP LOL";
		}
	cout<<moves;

	cout<<neg;

	getch();
	}


