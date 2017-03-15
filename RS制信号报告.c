#include <stdio.h>

int main()
{
	int n,a,b;
	scanf("%d",&n);
	if(n>=11&&n<=59)
	{
		a=n/10;
		b=n%10;
		switch(b)
		{
			case 1:
				printf("Faint signals, barely perceptible, ");
				break;
			case 2:
				printf("Very weak signals, ");
				break;			
			case 3:
				printf("Weak signals, ");
				break;	
			case 4:
				printf("Fair signals, ");
				break;	
			case 5:
				printf("Fairly good signals, ");
				break;			
			case 6:
				printf("Good signals, ");
				break;	
			case 7:
				printf("Moderately strong signals, ");
				break;				
			case 8:
				printf("Strong signals, ");
				break;	
			case 9:
				printf("Extremely strong signals, ");
				break;												
		}
		switch(a)
		{
			case 1:
				printf("unreadable.");
				break;
			case 2:
				printf("barely readable, occasional words distinguishable.");
				break;			
			case 3:
				printf("readable with considerable difficulty.");
				break;	
			case 4:
				printf("readable with practically no difficulty.");
				break;	
			case 5:
				printf("perfectly readable.");
				break;															
		}		
	}
	return 0;
}
