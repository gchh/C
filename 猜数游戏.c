#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//srand(time(0));
	//int number=rand()%100+1;
	//printf("一个1到100之间的数：%d\n",number);
	int number;
	printf("输入1到100之间的数：");
	scanf("%d",&number);
	int max=101;//此处max=100，当输入100时，将永远猜不对，只能猜到99 
	int min=1;//min=0或1都可以 
	int count=0;//1 
	int a;//=min+(max-min)/2; 
	while(1) //(a!=number)
	{
		count++;
		a=min+(max-min)/2;
		printf("第%d次猜：",count);
		if(a>number)
		{
			printf("%d,大了\n",a);
			max=a;
		} 
		else if(a<number)
		{
			printf("%d,小了\n",a);
			min=a;		
		}
		else 
		{
			printf("%d,猜对了。\n",a);	
			break;
		}
		//a=min+(max-min)/2;	
		//count++;
	};
	//printf("猜了%d次，猜对了%d。\n",count,a);
	return 0;
}
