#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>
struct star
{int x,y,z,state;
}a[700];
//time_t t;

void main()
{int l,i,j,k,gdriver=DETECT,gmode,errorcode,ch;
 int x=320,y=420,z,m,n;
 randomize();
initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
j=20;


       for(i=0,m=20,n=20;a[n].x<640,a[n].y<200;i++,n+=20)
       {
	      a[n].x=n;
	      a[n].y=10+rand()%200;  //m+(i%6)*40;
	      a[n].state=1;
       }


for(i=0;;)
{
    setcolor(y);
    ch=getch();

if(ch==80||ch==115)
{   y+=j;
    cleardevice();
    for(m=0;m<640;m++)
    {
	if(a[m].state==1)
	circle(a[m].x,a[m].y,10);

    }

circle(x,y,10);
circle(x,200,2);
}
if(ch==72||ch==119)
{   y-=j;
    cleardevice();
for(m=0;m<640;m++)
    {
	if(a[m].state==1)
	circle(a[m].x,a[m].y,10);
    }


circle(x,y,10);
circle(x,200,2);
}
if(ch==75||ch==97)
{   x-=j;
    cleardevice();
for(m=0;m<640;m++)

    {
	if(a[m].state==1)
	circle(a[m].x,a[m].y,10);
    }
circle(x,y,10);
circle(x,200,2);
}
if(ch==77||ch==100)
{	x+=j;
    cleardevice();
for(m=0;m<640;m++)

    {
	if(a[m].state==1)

	circle(a[m].x,a[m].y,10);
     }
circle(x,y,10);
circle(x,200,2);
}
if(ch==13||ch==113||ch==27)
{break;} //exit1();}
if(ch==32)
{
for(k=0;k<y+1-a[x].y;k++)
{for(l=0;l<4;l++)
	{putpixel(x+l,y-k-10,0);
putpixel(x+l,y-k-10,15);
if(x+l==a[x].x && y-k==a[x].y)
{   a[x].state=0;
    cleardevice();

for(m=0;m<640;m++)
	   {
		//setcolor();
		if(a[m].state==1)
		circle(a[m].x,a[m].y,10);
	    }

circle(x,y,10);
circle(x,200,2);
}


//delay(1);


	}
	/*if(a[x].y==y-k)
	{ly:
	break;} */
}
}
//circle(x,480,10);
}
}
/*exit()
{
int x,y,z;

}
*/