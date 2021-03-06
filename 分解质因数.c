/*
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。 
现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
n=axbxcxd
或
n=n
所有的符号之间都没有空格，x是小写字母x。

输入样例：
18

输出样例：
18=2x3x3

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

int main()
{
	int n;
	scanf("%d",&n);
	int isprime;
	isprime=isPrime(n);
	if(isprime==1)
	{
		printf("%d=%d",n,n);
	}
	else
	{
		//10以内的素数2，3，5，7
		int prime[4]={2,3,5,7},result[10];
		int i,cnt=0,mod=n;
		for(i=0;i<4;i++)
		{
			if(mod%prime[i]==0)
			{
				mod=mod/prime[i];
				result[cnt]=prime[i];
				cnt++;
				i--;
			}
			if(isPrime(mod))
			{
				result[cnt]=mod;
				break;
			}
		}
		int j;
		printf("%d=",n);
		for(j=0;j<=cnt;j++)
		{
			if(j==0)printf("%d",result[j]);	
			else printf("x%d",result[j]);	
		}
	}
	return 0;
} 

