/*
��Ŀ���ݣ�
������Ϊ2�ǵ�һ��������3�ǵڶ���������5�ǵ������������������ơ�
���ڣ�������������n��m��0<n<=m<=200����ĳ���Ҫ�����n����������m������֮�����е������ĺͣ�������n�������͵�m��������

�����ʽ:
������������һ����ʾn���ڶ�����ʾm��

�����ʽ��
һ����������ʾ��n����������m������֮�����е������ĺͣ�������n�������͵�m��������

����������
2 4

���������
15
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/
#include <stdio.h>
#include <math.h>

int isPrime(int x)//�ж��Ƿ������� 
{
	int isPrime,i;
	isPrime=1;
	for(i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			isPrime=0;
			break;
		}
	}
	return isPrime;
}

void getPrime(int* prime,int n)//��ȡn���������浽prime��ָ������ 
{
	int count=0,i=2,isprime; 
	while(count<n)
	{
		isprime=isPrime(i);
		if(isprime==1)
		{
			prime[count]=i;
			count++;
		}
		i++;
	}
	return;
}

int main()
{
	int n,m;
	int i,sum,flag,j;
	int a[200],count=0;
#if 1
/*
	i=2;
	while(count<200)
	{
		flag=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			a[count]=i;
			count++;
		}
		i++;
	}
	scanf("%d %d",&n,&m);
	sum=0;
	for(i=n;i<=m;i++)
	{
		sum+=a[i-1];
	}
	printf("%d\n",sum);	
*/
	//printf("%d\n",sizeof(a)/sizeof(int));
	getPrime(a,sizeof(a)/sizeof(int));
	scanf("%d %d",&n,&m);
	sum=0;
	for(i=n;i<=m;i++)
	{
		sum+=a[i-1];
	}
	printf("%d\n",sum);
#else
	for(i=2;;i++)/*��������ŵ�����a��*/
	{
		flag=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)/*��n�ܱ�2������n֮�������һ������������������*/
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			a[count]=i;
			count++;
			if(count==200)break;/*ͳ�Ƶ���200�����������*/
		}
	}
	//printf("�����򽫼����n������m������֮������֮��\n");
	//printf("������n��m���ÿո������");
	//while(scanf("%d %d",&n,&m))
	scanf("%d %d",&n,&m);
	{
		//if(n<0||n>200||m>200||m<0||m<n)continue;
		sum=0;
		/*����n������m���������*/
		for(i=n;i<=m;i++)
		{
			sum=sum+a[i-1];/*a[i-1]�ǵ�i������*/
		}
		printf("%d\n",sum);
	}	
#endif
	return 0;
} 
