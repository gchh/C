#include <stdio.h>

int main()
{
	unsigned int a,b,c;
	scanf("%u",&a);
	c=a%100;
	if(c>=60)
	{
		a-=60;
		a+=100;
	}
	if(a>=0&&a<=2359)//&&c>=0&&c<=59)
	{
		if(a>=800)b=a-800;
		else
		{
			b=a+2400;
			b-=800;			
		}
		if(b/100)printf("%d",b);
		else printf("%02d",b);
	}
	return 0;
}
