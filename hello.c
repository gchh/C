#include <stdio.h>

int main()
{
	unsigned int a,b,c,d;
	printf("Hello,world\n!\n");
	printf("%d\n",123.4);
	printf("%1.2f\n",123.456);
	printf("your score is %d\n",59);
	//printf(123.4); 
	scanf("%3d",&a);
	b=a/100;
	c=(a%100)/10;
	d=a%10;
	printf("%d",d*100+c*10+b);
	return 0;
} 
