/*
��Ŀ���ݣ�
��ĳ���Ҫ����һ����������Χ��[-100000,100000]��Ȼ���ú���ƴ�������������ÿһλ���������
������1234���������
yi er san si
ע�⣬ÿ���ֵ�ƴ��֮����һ���ո񣬵��������ֺ���û�пո񡣵���������ʱ��������Ŀ�ͷ���ϡ�fu������-2341���Ϊ��
fu er san si yi

�����ʽ:
һ����������Χ��[-100000,100000]��

�����ʽ��
��ʾ���������ÿһλ���ֵĺ���ƴ����ÿһλ���ֵ�ƴ��֮���Կո�ָ���ĩβû�пո�

����������
-30

���������
fu san ling
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
