/*
题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi

输入格式:
一个整数，范围是[-100000,100000]。

输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。

输入样例：
-30

输出样例：
fu san ling
时间限制：500ms内存限制：32000kb
*/ 
#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	char* shuziPinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	if(a<0)printf("fu ");
	int b=abs(a),i;
#if 0
	i=1;
	while(b/i>=10)
	{
		i*=10;
	}
	//printf("%d",i);
	int j;
	if(i==1)printf("%s",shuziPinyin[b]);
	else
	{
		for(j=i;j>=1;j/=10)
		{
			if(j==1)printf("%s",shuziPinyin[b/j]);
			else printf("%s ",shuziPinyin[b/j]);
			b=b%j;
		}
	}
#else
	if(b>=1000000)
	{
		//nothing
	}
	else if(b>=100000)
	{
		for(i=100000;i>=1;i/=10)
		{
			if(i==1)printf("%s",shuziPinyin[b/i]);
			else printf("%s ",shuziPinyin[b/i]);
			b=b%i;
		}
	}
	else if(b>=10000)
	{
		for(i=10000;i>=1;i/=10)
		{
			if(i==1)printf("%s",shuziPinyin[b/i]);
			else printf("%s ",shuziPinyin[b/i]);
			b=b%i;
		}
	}	
	else if(b>=1000)
	{
		for(i=1000;i>=1;i/=10)
		{
			if(i==1)printf("%s",shuziPinyin[b/i]);
			else printf("%s ",shuziPinyin[b/i]);
			b=b%i;
		}
	}	
	else if(b>=100)
	{
		for(i=100;i>=1;i/=10)
		{
			if(i==1)printf("%s",shuziPinyin[b/i]);
			else printf("%s ",shuziPinyin[b/i]);
			b=b%i;
		}
	}
	else if(b>=10)
	{
		for(i=10;i>=1;i/=10)
		{
			if(i==1)printf("%s",shuziPinyin[b/i]);
			else printf("%s ",shuziPinyin[b/i]);
			b=b%i;
		}
	}	
	else
	{
		printf("%s",shuziPinyin[b/i]);
	}
#endif		
	return 0;
} 
