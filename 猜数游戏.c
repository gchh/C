#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//srand(time(0));
	//int number=rand()%100+1;
	//printf("һ��1��100֮�������%d\n",number);
	int number;
	printf("����1��100֮�������");
	scanf("%d",&number);
	int max=101;//�˴�max=100��������100ʱ������Զ�²��ԣ�ֻ�ܲµ�99 
	int min=1;//min=0��1������ 
	int count=0;//1 
	int a;//=min+(max-min)/2; 
	while(1) //(a!=number)
	{
		count++;
		a=min+(max-min)/2;
		printf("��%d�β£�",count);
		if(a>number)
		{
			printf("%d,����\n",a);
			max=a;
		} 
		else if(a<number)
		{
			printf("%d,С��\n",a);
			min=a;		
		}
		else 
		{
			printf("%d,�¶��ˡ�\n",a);	
			break;
		}
		//a=min+(max-min)/2;	
		//count++;
	};
	//printf("����%d�Σ��¶���%d��\n",count,a);
	return 0;
}
