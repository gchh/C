/*
题目内容：
给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），在该位置上的元素是第i行上的最大数，第j列上的最小数。一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。

输入格式:
输入的第1行是一个正整数n, （1<=n<=100），然后有n行，每一行有n个整数，同一行上两个整数之间有一个或多个空格。

输出格式：
对输入的矩阵，如果找到鞍点，就输出其下标。下标为两个数字，第一个数字是行号，第二个数字是列号，均从0开始计数。
如果找不到，就输出
NO
题目所给的数据保证了不会出现多个鞍点。

输入样例：
4
1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9

输出样例：
2 1
时间限制：500ms内存限制：32000kb
*/
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int mx[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mx[i][j]);//mx[i][j]=(i+1)*(j+1);
		}
	}
	int Hmax_Lmin,h,l,flag_andian,andian_cnt=0;
	for(i=0;i<n;i++)
	{
		flag_andian=1;
		Hmax_Lmin=mx[i][0];
		h=i;
		l=0;
		for(j=0;j<n;j++)//寻找每一行最大值 
		{
			if(Hmax_Lmin<mx[i][j])
			{
				Hmax_Lmin=mx[i][j];
				l=j;
			}
		}
		for(j=0;j<n;j++)//行最大值是否是所在列最小值 
		{
			if(Hmax_Lmin>mx[j][l])
			{
				flag_andian=0;
			}
		}	
		//printf("%d %d %d\n",Hmax_Lmin,h,l);	
		if(flag_andian==1)//break;
		{
			printf("%d %d\n",h,l);
			andian_cnt++;//找到一个鞍点 
		}
	}
	if(andian_cnt==0)printf("NO\n");
	//else printf("%d %d\n",h,l);
	return 0;
}

