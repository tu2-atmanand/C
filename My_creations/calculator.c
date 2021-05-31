#include <stdio.h>
#include <math.h>
void cotangent()
{
	float x,y;
	printf("enter\n");
	scanf("%f",&x);
	x=(x*3.1415926536)/180;
	y=1/tan(x);
	printf("Answer=%f",y);
}
void secant()
{
	float x,y;
	printf("enter\n");
	scanf("%f",&x);
	x=(x*3.1415926536)/180;
	y=1/cos(x);
	printf("answer=%f",y);
}
void cosecant()
{
	float x,y;
	printf("enter value\n");
	scanf("%f",&x);
	x=(x*3.1415926536)/180;
	y=1/sin(x);
	printf("Answer=%f",y);
}
void tangent()
{
	float x,y;
	printf("enter\n");
	scanf("%f",&x);
	x=(x*3.1415926536)/180;
	y=tan(x);
	printf("Answer=%f",y);
}
void cosine()
{
	float x,y;
	printf("enter\n");
	scanf("%f",&x);
	x=(x*3.1415926536)/180;
	y=cos(x);
	printf("answer=%f",y);
}
void sine()
{
	float x,y;
	printf("enter value\n");
	scanf("%f",&x);
	x=(x*3.1415926536)/180;
	y=sin(x);
	printf("Answer=%f",y);
}
void expo()
{
	float x,y;
	printf("enter no.\n");
	scanf("%f",&x);
	y=exp(x);
	printf("Answer=%f\n",y);
}
void root()
{
	float a,y;
	printf("enter the root's no. and then no. whose root is required\n");
	scanf("%f",&a);
	y=sqrt(a);
	printf("root=%f\n",y);
}
void power()
{
	int a,b,y;
	printf("enter the base and power\n");
	scanf("%d%d",&a,&b);
	y=pow(a,b);
	printf("Answer=%d\n",y);
}
void logarithm()
{
	float x,y;
	printf("enter no.\n");
	scanf("%f",&x);
	y=log10(x);
	printf("Answer=%f\n",y);
}
void sum()
{
	int r,m,n;
	printf("enter 2 \n");
	scanf("%d%d",&m,&n);
	r=m+n;
	printf("Answer=%d\n",r);
}
void sub()
{
	int r,m,n;
	printf("enter\n");
	scanf("%d%d",&m,&n);
	r=m-n;
	printf("Answer=%d\n",r);
}
void mul()
{
	int r,m,n;
	printf("enter\n");
	scanf("%d%d",&m,&n);
	r=m*n;
	printf("Answer=%d\n",r);
}
void div()
{
	int r,m,n;
	printf("enter\n");
	scanf("%d%d",&m,&n);
	r=m/n;
	printf("Answer=%d\n",r);
}
void modulous()
{
	int r,m,n;
	printf("enter two numbers\n");
	scanf("%d%d",&m,&n);
	r=m%n;
	printf("Answer=%d\n",r);
}
int main()
{
	int a,b,ch;
	do
	{
		printf("enter yor choice:\n1:addition\n2:subtraction\n3:multiplication\n4:division\n5:remainder\n6:logarthmic\n7:power\n8:root\n9:exponential\n10:sine\n11:cosine\n12:tangent\n13:cosecant\n14:secant\n15:cotangent\n20:nothing\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:sum();break;
			case 2:sub();break;
			case 3:mul();break;
			case 4:div();break;
			case 5:modulous();break;
			case 6:logarithm();break;
			case 7:power();break;
			case 8:root();break;
			case 9:expo();break;
			case 10:sine();break;
			case 11:cosine();break;
			case 12:tangent();break;
			case 13:cosecant();break;
			case 14:secant();break;
			case 15:cotangent();break;
			case 20:break;
			default:printf("invalid choice\n");
		}
	}while(ch!=20);
}
