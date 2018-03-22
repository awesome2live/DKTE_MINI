#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
// list = course structure array
// list2 = facuty structre array
void login(void);
void registration(void);
void guest(void);
void add_cource(void);
void exitp(void);
void mainpage(void);
void administration(void);
void trainee();
void faculty_list();
FILE* fp;
struct cource // structure for cource
{
	char cource_name[30];
	int cource_date;
	int cource_month;
	int cource_year;
	int cource_duration;
	char cource_faculty;
};
struct faculty
{
	int faculty_id;
	char faculty_name[30];
	char faculty_cource[30];
	char faculty_education[30];
};
void mainpage(void);
int main()
{
	int log;
	printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB ON REQUEST COURCE \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
	printf("\t\t\t\t\xB2\xB2\xB2 1. Login as ADMIN\n\n");
	printf("\t\t\t\t\xB2\xB2\xB2 2. Login as Guest : \n");
	scanf("%d",&log);

	switch(log)// main pages
	{
		case 1:
			login();
			break;
		case 2:
			guest();
			break;
		default:
			printf("Enter valid input\n");
			break;
	}
	return 0;
}
void login(void) //login administration
{
	system("cls");
	char login_name[30];
	char login_pass[30];
	char ch;
	int i=0;
	char username[30]={"aaa"},password[30]={"rohit9032"};
	printf("===================================================\n");
	printf("                  LOGIN\n");
	printf("===================================================\n");

	printf("Enter User Name :\n");
	scanf("%s",login_name);
	if(strcmp(login_name,username)==0)
	{
		printf("Enter password :\n");
		while(ch!=13)
		{
			ch=getch();
			if(ch!=13 && ch!=8)
			{
				putch('*');
				login_pass[i]=ch;
				i++;
			}
		}
		login_pass[i] = '\0';
	}

	else
		{
			printf("\n\n\n               WARNING !! ENTER CORRECT USER NAME \n");
			login();
		}

	if(strcmp(login_pass,password)==0)
	{
		system("cls");
		administration();
	}
	else
	{
		if(strcmp(login_name,username)==0)

		if(strcmp(login_pass,password)!=0)
		{
			printf("\n\n                 WARNING !! INCORRECT PASSWORD \n");
		}
	}
}
void add_cource(void)// Add cource to data
{
	system("cls");
	char c;
	struct cource list;
	printf("========================================================\n");
	printf("                    ADD COURSE\n");
	printf("========================================================\n\n\n");

	fp=fopen("course.txt","a");
	if(fp==0)
	{
		printf("ERROR while opening file\n");
	}
	else
	{
	printf("Enter course name :\n");
	//fwrite("course.txt")
	int j;
	scanf("%d",&j);
	//while(c=getchar()!=EOF && c!='\n')
	//fgets(list.cource_name,30,stdin);..3
	}
	fclose(fp);
	administration();

}
void add_faculty(void) // add faculty information
{
	system("cls");
	struct faculty list2;
	int ch;
	printf("========================================================\n");
	printf("                    ADD FACULTY INFO\n");
	printf("========================================================\n\n\n");
	struct faculty f1;
	while(1)
	{
		system("cls");
		fp=fopen("faculty.txt","ab");
	printf("Enter faculty id : ");
	scanf("%d",&f1.faculty_id);
	printf("\nEnter Name : ");
	scanf("%s",f1.faculty_name);
	printf("\nEnter Faculty Course : ");
	scanf("%s",f1.faculty_cource);
	printf("\nEnter Faculty Education : ");
	scanf("%s",f1.faculty_education);

	fprintf(fp,"%d\t%s\t%s\t%s\n",f1.faculty_id,f1.faculty_name,f1.faculty_cource,f1.faculty_education);
	printf("              !! Successfully Added !!\n");
	printf("ADD MORE (Y/N)");
	char chr=getch();
		if(chr=='N' || chr=='n')
		{
			administration();
		}
	}

		fclose(fp);

}
void administration(void)
{
	int admin;
	system("cls");
		printf("=================================================\n");
		printf("                 ADMINISTRATION\n");
		printf("=================================================\n\n");
		printf("1.Add course\n");
		printf("2.Add faculty info\n");
		printf("3.Search faculty");
		scanf("%d",&admin);

		switch(admin)
		{
			case 1:
				add_cource();
			break;

			case 2:
				add_faculty();
			break;

			case 3:
				faculty_list();
			break;

			default:
			printf("Enter valid choice\n");
			break;
		}

}
void faculty_list()
{
	struct faculty f1;
	fp=fopen("faculty.txt","r");
	while(1)
	{
		fscanf(fp,"%d\t%s\t%s\t%s\n",&f1.faculty_id,&f1.faculty_name,&f1.faculty_cource,&f1.faculty_education);
		printf("\n\n\nID : %d\nNAME : %s\nCOURSE : %s\nEDUCATION : %s",f1.faculty_id,f1.faculty_name,f1.faculty_cource,f1.faculty_education);
		printf("\nADD MORE (Y/N)\n");
		char chr=getch();
		if(chr=='N' || chr=='n')

		{
			administration();
		}
	}
	fclose(fp);

}
system(cls);
void guest()
{   system("cls");
    printf("\t\t\t::::::::LOG IN AS::::::::\n\n\n");
    printf("\t\t\t\t\xB2\xB2\xB2  1.TRAINEE:\n\n\n");
    printf("\t\t\t\t\xB2\xB2\xB2  2.FACULTY:\n\n\n");
    printf("\t\t\t\t\xB2\xB2\xB2  3.DEPARTMENTAL HEAD:\n");
    int k;
    scanf("%d",&k);
    switch(k)
    {
        case 1: trainee();

    }
}
void trainee()
{   system("cls");
    printf("\t\t\t\t\xB2\xB2\xB2 1.REGISTER :\n\n\n");
    printf("\t\t\t\t\xB2\xB2\xB2 2.LOG IN :\n\n\n\n\n\n\n");
    printf("\t\t\t\t\xB2\xB2\xB2 3.FORGET USERNAME    OR    FORGET PASSWORD :\n");
    int z;
    scanf("%d",&z);
     switch(z)
    {
        case 1: registration();
    }
}
void registration(void)
{   system("cls");
    printf("=================================================\n");
		printf("                 REGISTRATION\n");
		printf("=================================================\n\n");
    printf("\t\t\t\t Enter Your Full Name :\n\t\t\t\t: \n");

    printf("\t\t\t\t Select Course You Want To Apply For :\n\t\t\t\t:");

}
