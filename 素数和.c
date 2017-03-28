/*
题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入格式:
两个整数，第一个表示n，第二个表示m。

输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入样例：
2 4

输出样例：
15
时间限制：500ms内存限制：32000kb
*/
#include <stdio.h>
#include <math.h>

int isPrime(int x)//判断是否是素数 
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

void getPrime(int* prime,int n)//获取n个素数，存到prime所指的数组 
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
	for(i=2;;i++)/*将素数存放到数组a中*/
	{
		flag=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)/*若n能被2到根号n之间的任意一个数整除，则不是素数*/
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			a[count]=i;
			count++;
			if(count==200)break;/*统计到有200个素数则结束*/
		}
	}
	//printf("本程序将计算第n个到第m个素数之间素数之和\n");
	//printf("请输入n和m，用空格隔开：");
	//while(scanf("%d %d",&n,&m))
	scanf("%d %d",&n,&m);
	{
		//if(n<0||n>200||m>200||m<0||m<n)continue;
		sum=0;
		/*将第n个至第m个素数求和*/
		for(i=n;i<=m;i++)
		{
			sum=sum+a[i-1];/*a[i-1]是第i个素数*/
		}
		printf("%d\n",sum);
	}	
#endif
	return 0;
} 
