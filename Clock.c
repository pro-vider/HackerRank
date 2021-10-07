//C program to display a Digital Clock
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void delay(unsigned int m_sec)
{
    clock_t goal = m_sec + clock();
    while (goal > clock());
}
int main()
{
	int hr=0,min=0,sec=0;
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);
    hr = local->tm_hour;    
	min = local->tm_min;     
    sec = local->tm_sec;    

	int i,j,k;
	for(i=hr;i<=23;i++)
	{
		for(j=min;j<=59;j++)
		{
			for(k=sec;k<=59;k++)
			{
				printf("\n The current time is:  %d : %d : %d",i,j,k);
			    delay(1000);
				system("cls");
				sec=0;
			}
		printf("\n%d : %d : %d",i,j,k);
		system("cls");
		min=0;
		}
	printf("\nTime is:  %d : %d : %d",i,j,k);
	system("cls");
	hr=0;
	}
	return 0;
}
