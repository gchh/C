/*
�����ʽ:
����GPS��䣬ÿ�����Իس����н��������һ����END������д��ĸ��

�����ʽ��
6λ��ʱ�䣬���Ϊ��
hh:mm:ss
���У�hh����λ����Сʱ��������λʱǰ�油0��mm����λ���ķ��ӣ�������λʱǰ�油0��ss����λ�����룬������λʱǰ�油0��

����������
$GPRMC,024813.640,A,3158.4608,N,11848.3737,E,10.05,324.27,150706,,,A*50
END

���������
10:48:13
*/ 
#include <stdio.h>
#include <string.h>
//#include <math.h>
//#include<stdlib.h>
#define GPS_ARRAY_SIZE 1000
void gps(char str[], int times[]);
int main(int argc, const char * argv[]) 
{
	// insert code here...
	// TODO Auto-generated method stub
	char word[GPS_ARRAY_SIZE];
	int times[3]={0};
	char end[]="END";
	do
	{
		scanf("%s",word);
		gps(word,times);
	}while(strcmp(word,end)!=0);
	printf("%02d:%02d:%02d\n",times[0],times[1],times[2]);
	return 0;
}
/*GPS���ݴ���
str[]��һ��GPS���ݣ�times[]����Ϊ3���洢��֤ͨ����ʱ���ʱ������
*/
void gps(char str[], int times[])
{
	int i;
	if(str[0]=='$'&&str[1]=='G'&&str[2]=='P'&&str[3]=='R'&&str[4]=='M'&&str[5]=='C'&&str[6]!='\0')
	{
		//����$��*֮�������ַ����
		int sum = 0; //���ֵ
		for(i=1; str[i]!='*'; i++)
		{
			sum = sum ^ str[i];
		}
		//����*����ַ�
		char c1=str[i+1], c2=str[i+2];
		//int1,int2�洢У���ַ�������ֵ��mask�洢int1,int2ת��Ϊ10����
		int int1, int2, mask;
		if(c1 >='A' && c1<='F')
		{
			int1 = 10+(c1-'A');
		}
		else
		{
			int1 = c1 - '0';
		}
		if(c2 >='A' && c2<='F')
		{
			int2 = 10+(c2-'A');
		}
		else
		{
			int2 = c2 - '0';
		}
		mask = int1*16 + int2; //16����ת10����
		//�ҳ�״ֵ̬
		for(i=7; str[i]!='*'; i++)
		{ 
			//�ӵ�һ�����ź��濪ʼ����
			if(str[i]==',')break;
		}
		if(str[i+1]=='A'&&mask==sum)
		{
			int hour = 10*(str[7]-'0') + (str[8]-'0'); //Сʱ
			hour = (hour + 8) % 24;
			times[0] = hour;
			times[1] = 10 * (str[9] - '0') + (str[10] - '0'); //����
			times[2] = 10 * (str[11] - '0') + (str[12] - '0'); //��
		}
	}
}
