/*
��Ŀ���ݣ�
����һ��n*n����A������A�İ�����һ��λ�ã�i��j�����ڸ�λ���ϵ�Ԫ���ǵ�i���ϵ����������j���ϵ���С����һ������AҲ����û�а��㡣
����������ҳ�A�İ��㡣

�����ʽ:
����ĵ�1����һ��������n, ��1<=n<=100����Ȼ����n�У�ÿһ����n��������ͬһ������������֮����һ�������ո�

�����ʽ��
������ľ�������ҵ����㣬��������±ꡣ�±�Ϊ�������֣���һ���������кţ��ڶ����������кţ�����0��ʼ������
����Ҳ����������
NO
��Ŀ���������ݱ�֤�˲�����ֶ�����㡣

����������
4
1 7 4 1
4 8 3 6
1 6 1 2
0 7 8 9

���������
2 1
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
		for(j=0;j<n;j++)//Ѱ��ÿһ�����ֵ 
		{
			if(Hmax_Lmin<mx[i][j])
			{
				Hmax_Lmin=mx[i][j];
				l=j;
			}
		}
		for(j=0;j<n;j++)//�����ֵ�Ƿ�����������Сֵ 
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
			andian_cnt++;//�ҵ�һ������ 
		}
	}
	if(andian_cnt==0)printf("NO\n");
	//else printf("%d %d\n",h,l);
	return 0;
}

