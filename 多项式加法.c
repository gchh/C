/*
��Ŀ���ݣ�
һ������ʽ���Ա��Ϊx�ĸ�������ϵ���˻��ĺͣ����磺

���ڣ���ĳ���Ҫ������������ʽ��Ȼ���������������ʽ�ĺͣ�Ҳ���ǰѶ�Ӧ�����ϵ�ϵ�����Ȼ�������
����Ҫ����������Ϊ100��

�����ʽ:
�ܹ�Ҫ������������ʽ��ÿ������ʽ�������ʽ���£�
ÿ�������������֣���һ����ʾ�ݴΣ��ڶ�����ʾ���ݴε�ϵ�������е�ϵ��������������һ��һ��������ݣ����һ��һ����0���ݡ�
ע���һ�к����һ��֮�䲻һ�������ݴν���˳�����У����ĳ���ݴε�ϵ��Ϊ0���Ͳ������������������ˣ�0���ݵ�ϵ��Ϊ0ʱ���ǻ���������������С�

�����ʽ��
������ݿ�ʼ���ν���0�ݣ��磺
2x6+3x5+12x3-6x+20
ע�����е�x��Сд��ĸx���������еķ���֮�䶼û�пո����ĳ���ݵ�ϵ��Ϊ0����Ҫ�����

����������
6 2
5 3
3 12
1 6
0 20
6 2
5 3
2 12
1 6
0 20

���������
4x6+6x5+12x3+12x2+12x+40
ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/
#include <stdio.h>

int main()
{
	int a[101],a1[101],b[101],b1[101];
	int i=0,j=0;
#if 0
	scanf("%d",&a[0]);
	scanf("%d",&a1[0]);
	while(a[i]!=0)
	{
		if(a[i]>100)return 0;
		i++;
		scanf("%d",&a[i]);
		scanf("%d",&a1[i]);	
	}

	scanf("%d",&b[0]);
	scanf("%d",&b1[0]);
	while(b[j]!=0)
	{
		if(b[j]>100)return 0;
		j++;
		scanf("%d",&b[j]);
		scanf("%d",&b1[j]);	
	}
#else
	scanf("%d %d",&a[0],&a1[0]);
	while(a[i]!=0)
	{
    	if(a[i]>100)return 0;
		i++;
		scanf("%d %d",&a[i],&a1[i]);
	}

	scanf("%d %d",&b[0],&b1[0]);
	while(b[j]!=0)
	{
  		if(b[j]>100)return 0;
		j++;
		scanf("%d %d",&b[j],&b1[j]);
	}
#endif
#if 0	
	int k;
	for(k=0;k<=i;k++)	
	{
		printf("%d %d\n",a[k],a1[k]);
	}
	int h;
	for(h=0;h<=j;h++)	
	{
		printf("%d %d\n",b[h],b1[h]);
	}
#endif	
	int c[101],c1[101];
	int k,h,m;
	int flag;
	for(k=0;k<=i;k++)
	{
		for(h=0;h<=j;h++)
		{
			flag=0;
			if(a[k]==b[h])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			c[m]=a[k];
			c1[m]=a1[k]+b1[h];
		}
		else
		{
			c[m]=a[k];
			c1[m]=a1[k];			
		}
		m++;
	}
	for(k=0;k<=j;k++)
	{
		for(h=0;h<=i;h++)
		{
			flag=0;
			if(b[k]==a[h])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			c[m]=b[k];
			c1[m]=b1[k];	
			m++;			
		}
	}
	int u;
	for(k=0;k<m;k++)
	{
		for(h=k+1;h<m;h++)	
		{
			if(c[k]<c[h])
			{
				u=c[k];
				c[k]=c[h];
				c[h]=u;
				u=c1[k];
				c1[k]=c1[h];
				c1[h]=u;					
			}
		}
	}
	for(k=0;k<m;k++)
	{
		if(c1[k]!=0||c[k]==0)
		{
			if(c[k]==0)
			{
				if(k==0)printf("%d",c1[k]);
				else if(c1[k]<0) printf("%d",c1[k]);
				else printf("+%d",c1[k]);				
			}			
			else if(c[k]==1)
			{
				if(k==0)
				{
					if(c1[k]==1)printf("x");
					else if(c1[k]==-1)printf("-x");
					else printf("%dx",c1[k]);
				}
				else if(c1[k]==-1) printf("-x");
				else if(c1[k]<0) printf("%dx",c1[k]);
				else if(c1[k]==1) printf("+x");
				else printf("+%dx",c1[k]);				
			}			
			else			
			{
				if(k==0)
				{
					if(c1[k]==1)printf("x%d",c[k]);
					else if(c1[k]==-1)printf("-x%d",c[k]);
					else printf("%dx%d",c1[k],c[k]);
				}
				else if(c1[k]==-1) printf("-x%d",c[k]);
				else if(c1[k]<0) printf("%dx%d",c1[k],c[k]);
				else if(c1[k]==1) printf("+x%d",c[k]);
				else printf("+%dx%d",c1[k],c[k]);
			}
		}
	}
	return 0;
}

