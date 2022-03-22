#include<stdio.h>
int main()
{
	int months[13] = {0,31,30,31,30,31,30,31,31,30,31,30,31};
	int month = 11, day = 9, year = 2014;
	int n = 1000;
	while(n>0)
	{
		day++;
		if(month>12)
		{
			month = 1;
			year++;
		}
		if(day > months[month])
		{
			day = 1;
			month++;
		}
		
		n--;
		if((year%4==0)||(year%4==0&&year%100!=0))
		{
			months[2] = 29;
		}
		else
		months[2] = 28;
	}
	printf("%d--%d--%d",year,month,day); 
}
