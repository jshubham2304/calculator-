#include<stdio.h>
sum(int x ,int y)
{
	int z;
	no();
	z=x+y;
	return z;
}
sub(int x ,int y)
{
	int p;
	no();
	p=x-y;
	return p;
}
mul(int x ,int y)
{
	int q;
	no();
	q=x*y;
	return q;
}
div(float x ,float y)
{
	int r;
	no();
	r=x/y;
	return r;
}
no(void)
{
	int a,b;
	printf(" enter the value ");
	scanf("%d%d",&a,&b);
}
int main()
{
	int a,b,c,result;
	printf(" enter the operator which u want to perform +, -,*,/");
	scanf("%c", &c);
	no();
	switch(c)
	{
		case '+':
			{
				int result;
				result=sum(int a,int b);
				printf("result=%d",result);
				break;
			}
		case '-':
			{
				result=sub(int a,int b);
				printf("result=%d",result);
				break;
			}
		case '*':
			{
				result=mul(int a,int b);
				printf("result=%d",result);
				break;
			}
		case '/':
			{
				result=div(float a,float b);
				printf("result=%d",result);
				break;
			}
	}
	default:
		{
			printf("error");
		}
	return 0;
}
Concepts of Object-oriented programming Language:

Class
Objects
Encapsulation
Polymorphism
Inheritance
Abstraction
