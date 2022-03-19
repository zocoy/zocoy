#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int n;//获取学生数量
struct __attribute__((packed)) student//避免字节对齐影响程序设计
{
	int age;
	int number;
	int english;
	int maths;
	int total;
	int c;
	char name[10];
}stu[36];

void welcome()//打印初始化菜单
{	
 printf("**********************************************\n");
 printf("*** Student achievement management system  ***\n");
 printf("***  Enter 1 Input student's information   ***\n");
 printf("***  Enter 2 Search student's information  ***\n");
 printf("***  Enter 3 Update student's information  ***\n");
 printf("***  Enter 4 Derive student's information  ***\n");
 printf("***  Enter 5 Delete student's information  ***\n");
 printf("***  Enter 6 Add student's information     ***\n");
 printf("***  Enter 7 Rank students' total scores   ***\n");
 printf("***            Enter 0 Log off             ***\n");
 printf("**********************************************\n");
}
void Inputinformation()//输入学生信息
{
	int i;
	printf("Please input the number of students:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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
void search()		//查找学生信息					
{
	int i,j,k;
	printf("If you don't want to search student's information.Please enter 0.\n");
	printf("Now please input the student's number to search his information: ");
	for(i=1; i<=n;i++)
	{
		scanf("%d",&j);
		if (j==0)
		{
			break;
		}
		
        if(i>n && i<=0)
        {
            printf("What you enter is worry\n");
            break;
        }
		for(i=1; i<=n; i++){
		if(j==stu[i].number)
		{
			printf("The student's name is %s\n'",stu[i].name);
			printf("The student's number is %d\n",stu[i].number);
			printf("The student's english score is %d\n",stu[i].english);
			printf("The student's maths score is %d\n",stu[i].maths);
			printf("The student's C score is %d\n",stu[i].c);
			printf("The student's total score is %d\n",stu[i].total);
		}
		}
	}
	system("pause");
	system("cls"); 
}
void updateinfo()//更改学生信息
{
	int m,i;
	printf("Please enter which student's information do you want to update(Enter his number)");
	scanf("%d",&m);
	for(i=1; i<= n;i++)
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
	for(i=1; i<=n;i++)
	{
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
	stu[i].total =stu[i].english + stu[i].maths + stu[i].c; 
	}
	system("pause");
	system("cls"); 
}
void DeriveInformation()//打印学生信息单
{
	int i,j;
	printf("Please enter student's number you want to derive:");
	scanf("%d",&j);
	for(i=1; i<=n;i++)
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
void Del()//删除学生信息
{
	int e,xuehao,j,i;
	printf("Plesae enter student's number to delete\n");
	scanf("%d",&xuehao);
	for(i = 1; i <= n;i++)
		if(stu[i].number == xuehao)
		{
			j = i;
			for (e = i - 1; e < n; e++)
			{
				strcpy(stu[j].name,stu[j + 1].name);
				stu[j].age = stu[j + 1].age;
				stu[j].english = stu[j + 1].english;
				stu[j].c = stu[j + 1].c;
				stu[j].maths = stu[j + 1].maths;
				stu[j].total = stu[j].maths + stu[j].c + stu[j].english;
				n--;
			}
			printf("This student's information is deleted.\n");
		}
		else
			printf("There isn't this student\n");
	system("pause");
	system("cls"); 
}
void Add()//添加学生信息
{
	int i,j;
	char ch;
	j = n;
	printf("Add student's number: ");
	scanf("%d",&stu[j + 1].number);
	printf("Add student's age: ");
	scanf("%d",&stu[j + 1].age);
	printf("Add student's name: ");
	scanf("%d",stu[j + 1].name);
	printf("Add student's English score: ");
	scanf("%d",&stu[j + 1].english);
	printf("Add student's Maths score: ");
	scanf("%d",&stu[j+1].maths);
	printf("Add student's C score: ");
	scanf("%d",&stu[j + 1].c);
	strcpy(stu[j+2].name,stu[j+1].name);
	stu[j+2].number=stu[j+1].number;
	stu[j+2].c=stu[j+1].c;
 	stu[j+2].maths=stu[j+1].maths;
 	stu[j+2].english=stu[j+1].english;
	n++;
	printf("Add FInished");
	system("pause");
	system("cls"); 
}
void Rank()//排序学生信息
{
 int i,j,t;
 if(n != 0)
 {
  	for(i=1;i<=n;i++)
	{
  	for(j=1;j<n;j++)
	{ 
   		if(stu[j].total<stu[j+1].total)
   		{
   			t=stu[j].total;
   			stu[j].total=stu[j+1].total;
   			stu[j+1].total=t;
   		}
 	}
 	for(i=1;i<=n;i++)
 	{
 		printf("name %s\n",stu[i].name);
 		printf("number %d\n",stu[i].number);
 		printf("C score %d\n",stu[i].c);
 		printf("Maths score %d\n",stu[i].maths); 	
 		printf("total %d\n",stu[i].total);
 	}
	}
}
else 
	printf(" ++++++ We can't find the information ++++++\n");
system("pause");
system("cls"); 
}
int main()//主函数
{
	while(1)
	{
		char ch;
		int a=1;
		welcome();
		ch = getch();
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
		case '5':Del();
			break;
		case '6':Add();
			break;
		case '7':Rank();
			break;
 		case '0':
		 	printf(" Student achievement management system has breaked( ^_^ )\n");;
		 	break;
		default:
			printf("Sorry, your enter is worry\n");
		}
	}
}