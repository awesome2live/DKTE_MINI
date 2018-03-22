#include <stdio.h>
#include <string.h>
// list = course structure array
// list2 = facuty structre array
void login(void);
void guest(void);
void add_cource(void);
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
void add_faculty(void);
int main()
{
	int log;
	printf("==================================================\n");
	printf("                  ON REQUEST COURCE \n");
	printf("==================================================\n");
	printf("1.Login as ADMIN\n");
	printf("2.Login as Guest\n");
	scanf("%d",&log);
	
	switch(log)// main page
	{
		case 1:
			login();
			break;
		case 2:
			//guest();
			break;
		default:
			printf("Enter valid input\n");
			break;
	}
	return 0;
}
void login(void) //login administration
{
	char login_name[30];
	char login_pass[30];
	char username[30]={"rohitchile"},password[30]={"rohit9032"};
	printf("===================================================\n");
	printf("                  LOGIN\n");
	printf("===================================================\n");
	
	printf("Enter User Name :\n");
	scanf("%s",login_name);
	if(strcmp(login_name,username)==0)
	{
	printf("Enter password :\n");
	scanf("%s",login_pass);
	}
	else
		{
			printf("ENTER CORRECT USER NAME \n");
		}	
	
	if(strcmp(login_pass,password)==0)
	{
		int admin;
		printf("=================================================\n");
		printf("                 ADMINISTRATION\n");
		printf("=================================================\n\n");
		printf("1.Add cource\n");
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
			
			break;
			
			default:
			printf("Enter valid choice\n");
			break;
		}
		
	}
	else
	{
		if(strcmp(login_name,username)==0)
		
		if(strcmp(login_pass,password)!=0)
		{
			printf("ENTER CORRECT PASSWORD \n");
		}
	}
}
void add_cource(void)// Add cource to data
{
	char c;
	struct cource list;
	printf("========================================================\n");
	printf("                    ADD COURCE\n");
	printf("========================================================\n\n\n");
	
	fp=fopen("cource.dat","ab");
	if(fp==0)
	{
		printf("ERROR while opening file\n");
	}
	printf("Enter cource name :\n");
	while(c=getchar()!=EOF && c!='\n')
	fgets(list.cource_name,30,stdin);
	fclose(fp);
	exit(0);
	login();
}
void add_faculty(void) // add faculty information
{
	struct faculty list2;
	int ch;
	printf("========================================================\n");
	printf("                    ADD FACULTY INFO\n");
	printf("========================================================\n\n\n");
	
	fp=fopen("faculty.txt","ab");
	printf("Enter faculty name :\n");
	while(ch=getchar()!=0 && ch!='/n')
	fgets(list2.faculty_name,30,stdin);
	fclose(fp);
	exit(0);
}
