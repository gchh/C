/*
��Ŀ���ݣ�
��ĳ���Ҫ����һƪӢ�����£�Ȼ��ͳ�����еĵ��������������Ҫͳ�Ƶ�����Ϊ��
�ܵĵ���������
����1����ĸ��10����ĸ�ĵ��ʵ�������
���ʺ͵��ʵļ���������±������γɵģ��ո�tab���س����С����š���š��ʺš����š�˫���ź�ð�š���Щ���Ų��ܱ����뵥�ʵĳ����С�

��ˣ���������ľ��ӣ�
????"What you see is a very hefty response," said CNN Aviation Correspondent Rene Marsh.
���еĵ���Ϊ��
????What you see is a very hefty response said CNN Aviation Correspondent Rene Marsh
��14����ע����Ȼ�����response,"������˿ո����ǲ����ܱ�֤���е������ж�����������صĿո�

�����ţ���ʾ��д��'�������ֺţ�-���������ʵ�һ���֣����ԡ�he's����һ�����ʣ�����Ϊ4������F-16 fighter jets�����������ʡ�Ϊ����ĳ���ķ��㣬���������в�������������������ֺš�

�����ʽ:
һƪӢ�����¡�
���֪����������ˣ�
���ʹ��scanf�����᷵����ζ����˼���������ֵ�������ֵС����Ҫ����ı���������ʱ����ʾ��������ˣ�
���ʹ��getchar�������������ʱ����EOF��

�����ʽ��
ʮһ�����֣������ǵ��������ͺ���1��10����ĸ�ĵ��ʵ��������Կո�ָ�����󲻺��ո�

����������
F-16 fighter jets escorted two passenger planes into Atlanta's Hartsfield-Jackson International Airport on Saturday after a bomb threat made on Twitter was deemed credible, according to military officials.
Southwest Airlines Flight 2492 and Delta Flight 1156 landed safely at the airport and were searched by bomb disposal units, according to airline officials. Nothing out of the ordinary was found, officials said.
Delta spokesman Morgan Durant said, "It was a Portland, Oregon, to Atlanta, Georgia, flight. Delta is supporting the sweeping process carried out by authorities."

���������
85 2 11 11 11 6 11 10 10 9 1
*/
#include "stdio.h"

int main()
{
	FILE *fp;
	fp = fopen("E:\\Desktop\\C\\1.txt","r");//�򿪰����ı���txt�ļ���
	char c;
	int NumOfWords[10] = {0};
	int len = 0;
	int SumOfWords = 0;

//while((c=getchar())!=EOF)//�������������ı���
//while((scanf("%c",&c))!=EOF)//�������������ı���
//while((c=fgetc(fp))!=EOF)//��txt�ļ��ж����ı��е��ַ���
	while(!feof(fp))//δ���ı�����ʱһֱѭ����
	{
		c=fgetc(fp);//��txt�ļ��ж����ı��е��ַ���
		putchar(c);
		if(c==' '||c=='\t'||c==','||c=='?'||c=='.'||c=='\"'||c==':'||c=='('||c==')'||c=='\n'||c=='\r'||c==EOF)
		{
			if(len>0)
			{
				++SumOfWords;
			}
			if(len>=1&&len<=10)
			{
				++NumOfWords[len-1];
				len=0;
			}
			else
			{	//���ʳ��ȴ���10ʱ��Ҳ�轫ͳ���¸����ʵĳ��������㣻?
				len=0;
			}
		}
		else
		{
			++len;
		}
	}
	
	int i;
	/*
	printf("\n%d\n",SumOfWords);
	for(i=1;i<=10;i++)
	{	//�������ʱ��ֱ����ʾ��
		printf("%d ",i);
	}
	printf("\n");
	*/
	printf("\n%d ",SumOfWords);
	for(i=0;i<10;i++)
	{
		if(NumOfWords[i])
		{
			printf("%d ",NumOfWords[i]);
		}
		else
		{
			printf("0 ");
		}
	}
	return 0;
}

