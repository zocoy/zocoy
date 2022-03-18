#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 1
struct __attribute__((packed)) student
{
	int age;
	char name[10];
	int number;
	int english;
	int maths;
	int total;
	int  c;
}stu[36];

void welcome()
{	
 printf("**********************************************\n");
 printf("*** Student achievement management system  ***\n");
 printf("***  Enter 1 Input student's information   ***\n");
 printf("***  Enter 2 Search student's information  ***\n");
 printf("***  Enter 3 Update student's information  ***\n");
 printf("***  Enter 4 Derive student's information  ***\n");
 printf("***            Enter 0 Log off             ***\n");
 printf("**********************************************\n");
}
void Inputinformation()
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("Please input student's age: ");				
		scanf("%d",&stu[i].age);
		printf("Please input student's name: "); 
		scanf("%s",stu[i].name);
		printf("please input student's number: ");
		scanf("%d",&stu[i].number);
		printf("Please input student's english score: ");
		scanf("%d",&stu[i].english);
		printf("Please input student's maths score: ");
		scanf("%d",&stu[i].maths);
		printf("Please input student's c score: ");
		scanf("%d",&stu[i].c);
		stu[i].total=stu[i].english + stu[i].c + stu[i].maths;
		printf("%s's total score is %d\n",stu[i].name,stu[i].total);
	}
	system("pause");
	system("cls"); 
}
void search()							
{
	int i,j,k;
	printf("If you don't want to search student's information.Please enter 0.\n");
	printf("Now please input the student's number to search his information: ");
	for(i=0; i<N;i++)
	{
		scanf("%d",&j);
		if (j==0)
		{
			break;
		}
		
        if(i>N && i<=0)
        {
            printf("What you enter is worry\n");
            break;
        }
		for(i=0; i<N; i++){
		if(j==stu[i].number)
		{
			printf("The student's name is %s\n'",stu[i].name);
			printf("The student's number is %d\n",stu[i].number);
			printf("The student's english score is %d\n",stu[i].english);
			printf("The student's maths score is %d\n",stu[i].maths);
			printf("The student's C score is %d\n",stu[i].c);
			printf("The student's total score is %d\n",stu[i].total);
		}
		else
			printf("We can't find the student\n");
		}
	}
	system("pause");
	system("cls"); 
}
void updateinfo()
{
	int m,i;
	printf("Please enter which student's information do you want to update(Enter his number)");
	scanf("%d",&m);
	for(i=0; i<N;i++)
	{
	if(m==stu[i].number)
	{
	printf("The student's information is below\n");
	printf("The student's name is:%s\n",stu[i].name);
	printf("The student's number is:%d\n",stu[i].number);
	printf("The student's age is %d\n",stu[i].age);
	printf("The student's english score is %d\n",stu[i].english);
	printf("The student's C score is %d\n",stu[i].c);
	printf("The student's maths score is %d\n",stu[i].maths);
	}
	else
		printf("Can't search this student's information,or your input is worry\n");
	}
	printf("Please input student's name:\n");
	scanf("%s",stu[i].name);
	getchar();
	printf("Please input student's age:\n");
	scanf("%d",&stu[i].age);
	printf("Please input student's english:\n");
	scanf("%d",&stu[i].english);
	printf("Please input student's maths:\n");
	scanf("%d",&stu[i].maths);
	printf("Please input student's c:\n");
	scanf("%d",&stu[i].c);
	
	system("pause");
	system("cls"); 
}
void DeriveInformation()
{
	int i,j;
	printf("Please enter student's number you want to derive:");
	scanf("%d",&j);
	for(i=0; i<N;i++)
	{
		if(j==stu[i].number)
		{
			printf("*****************%s's information*****************\n",stu[i].name);
			printf("*\tThe student's age is: %d\t\t\t*\n",stu[i].age);
			printf("*\tThe student's english scoreis: %d\t*\n",stu[i].english);
			printf("*\tThe student's maths score is: %d\t\t*\n",stu[i].maths);
			printf("*\tThe student's C score is: %d\t\t*\n",stu[i].c);
			printf("*\tThe student's total score is %d\t\t*\n",stu[i].total);
			printf("************************************************\n");
		}
	}
	system("pause");
	system("cls"); 
}
int main()
{
	while(1)
	{
		welcome();
		char ch = getch();
		int a=1;
		switch(ch)
		{
		case '1':Inputinformation();
			break;
 		case '2':search();
		 	break;
		case '3':updateinfo();
			break;
		case '4':DeriveInformation();
			break;
 		case '0':a=0;
		 	break;
		default:
			printf("Sorry, your enter is worry\n");
		}
	}
}