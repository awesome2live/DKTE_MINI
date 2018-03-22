#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void iLogin();
void iLogout();
void traineeLogout();
void facultyLogout();
void dhLogout();
void iLoginT();
void iForgetpass();
void iRegistration(void);
void iGuest(void);
void addCourse(void);
void iExit(void);
void mainPage(void);
void iAdministration(void);
void iTrainee();
void facultyList();
void addFaculty();
void iFaculty();
void departmentalHead();
void traineeHome(char username[]);
void facultyHome(char username[]);
void dhHome(char username[]);


FILE *fp;

typedef struct Course
{

	char courseName[30];
	int courseDate;
	int courseMonth;
	int courseYear;
	int courseDuration;
	char courseFaculty;
}l;

typedef struct Faculty
{
	int facultyId;
	char facultyName[30];
	char facultyCourse[30];
	char facultyEducation[30];
}f1;

typedef struct TraineeData
{    char Id[100];
     char username[100];
     char password[100];
}k;

typedef struct facultyData
{
      char username[100];
     char password[100];
}a;
typedef struct departmentalHeadData
{
      char username[100];
      char password[100];
}b;
void mainPage();
int main()
{     system("COLOR 0C");
      getch();
      system("cls");
      int log;
      printf("\t\t\t\t\t *** WELCOME TO *** \n\n");
	printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB ON REQUEST COURSE \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n");
	printf("\t\t\t\t\* 1. Login as ADMIN\n\n");
	printf("\t\t\t\t\* 2. Login as Guest : \n");
	printf("\n\t\t\t\t");
	scanf("%d",&log);

	switch(log)     // main pages
	{
		case 1: iLogin();
                    break;
		case 2:
                    iGuest();
                    break;
		default:
                    printf("Enter valid input\n");
                    break;
	}
	return 0;
}
void iLogin(void) //login administration
{     while(1)
      {
	system("cls");
	char loginName[30];
	char loginPass[30];
	char ch;
	int i=0;
	int count=0;
	char iUsername[30]={"admin"},iPassword[30]={"admin"};
	printf("\t\t\t=============================================\n");
	printf("\t\t\t\t\t  ADMIN LOGIN\n");
	printf("\t\t\t=============================================\n");
	printf("\t\t\tEnter User Name : ");
	gets(loginName);
	//scanf("%s",loginName);
	//getch();
	if(strcmp(loginName,iUsername)==0)
	{

		printf("\n\t\t\tEnter password :");
		while(ch!=13)
		{
			ch=getch();
			if(ch!=13 && ch!=8)
			{
				putch('*');
				loginPass[i]=ch;
				i++;
			}
		}
		loginPass[i] = '\0';
	}

	else
		{
			printf("\n\n\n               WARNING !! ENTER CORRECT USER NAME \n");
			iLogin();
		}

	if(strcmp(loginPass,iPassword)==0)
	{
		system("cls");
		iAdministration();
	}
	else
	{
		if(strcmp(loginName,iUsername)==0)

		if(strcmp(loginPass,iPassword)!=0)
		{
			printf("\n\n                 WARNING !! INCORRECT PASSWORD \n");
		}


      }
}
}

      /*if(iPassword[i]!=loginPass[i])
            {
                  count++;
                  if(count==2)
                  {

                  }
            }*/


void addCourse(void)       // Add course to data
{
	system("cls");
	char c;
	struct Course l;
	FILE *fp;
	printf("\t\t\t\t======================================================\n");
	printf("\t\t\t\t\t\t    ADD COURSE\n");
	printf("\t\t\t\t======================================================\n\n\n");



	fp=fopen("course.txt","a+");
	if(fp==NULL)
	{
		printf("ERROR while opening file\n");
	}
	else
	{
	printf("\t\t\t\tEnter course name : ");

	//fwrite("course.txt")
	//char courseName[200];
	//scanf("%s",l.courseName);
	fflush(stdin);
	//printf("\t\t\t\t");
	gets(l.courseName);


    fprintf(fp,"%s\n",l.courseName);


    printf("\n\t\t\t\tCourse Added Successfully...!\n");
	//scanf("%d",&j);
	//while(c=getchar()!=EOF && c!='\n')
	//fgets(list.cource_name,30,stdin);..3
	}
	fclose(fp);
	getch();
	iAdministration();
}
void addFaculty(void) // add faculty information
{
	system("cls");
	//struct Faculty list2;
	//int ch;
	printf("\t\t\t\t\t\t==================================================\n");
	printf("\t\t\t\t\t\t  ADD FACULTY INFO\n");
	printf("\t\t\t\t\t\t==================================================\n\n\n");
	struct Faculty f1;
	FILE *fp;
      //system("cls");
      fp=fopen("faculty.txt","a+");
      if(fp==NULL)
      {
            printf("!* Error *! while opening file /n ");
      }
      else
      {
      printf("Enter faculty id : ");
	fflush(stdin);
	scanf("%d",&f1.facultyId);
	//scanf("%s",f1.facultyId);
      fprintf(fp,"%d\t",f1.facultyId);

      printf("\nEnter Name : ");
	fflush(stdin);
	gets(f1.facultyName);
	//scanf("%s",f1.facultyName);
      fprintf(fp,"%s\t",f1.facultyName);

	printf("\nEnter Faculty Course : ");
	gets(f1.facultyCourse);
	//scanf("%s",f1.facultyCourse);
      fprintf(fp,"%s\t",f1.facultyCourse);

	printf("\nEnter Faculty Education : ");
	gets(f1.facultyEducation);
	//scanf("%s",f1.facultyEducation);
      fprintf(fp,"%s\n",f1.facultyEducation);


	printf("              !! Successfully Added !!\n");
      }

	printf("ADD MORE (Y/N)");
	char chr2=getch();
		if(chr2=='N' || chr2=='n')
		{

            iAdministration();

		}


		fclose(fp);
		getch();

}

void iAdministration(void)
{
	int admin='\n';
	system("cls");
	 printf("\n\n");
      time_t currentime;
	time(&currentime);

            printf("\t\t\t\t\t\t**WELCOME ADMIN**\n");
		printf("\t\t\t\t=================================================\n");
		printf("\t\t\t\t\t\t  ADMINISTRATION\n");
		printf("\t\t\t\t=================================================\n\n");

		printf("\t\t\t\t1.Add course\n");
		printf("\t\t\t\t2.Add faculty info\n");
		printf("\t\t\t\t3.Search faculty\n");
		printf("\t\t\t\t4.Logout\n");
		printf("\t\t\t\t5.Go back to Home\n");
            printf("\n\n\t\t\t\t%s",ctime(&currentime));
            printf("\n\t\t\t\t");
		scanf("%d",&admin);



		switch(admin)
		{
			case 1:
                          addCourse();
                          break;

			case 2:
                          addFaculty();
                          break;

			case 3:
                          facultyList();
                          break;

                  case 4: iLogout();
                          break;

                  case 5: main();
                          break;

			default:
                          printf("Enter valid choice\n");
                          break;
		}



}
void iLogout()
{
      printf("\n\n\t\t\t\tSure want to log out...!\n");
      printf("\n\t\t\t\t");
      printf("Y/N");
      char chr1=getch();
	if(chr1=='N' || chr1=='n')
	{
            iAdministration();
	}
	else
      {
            iLogin();
      }

}

void facultyList()
{
	struct Faculty f1;
	fp=fopen("faculty.txt","r");
	while(1)
	{
		fscanf(fp,"%d\t",f1.facultyId);   //"%s\t","%s\t","%s\n",&f1.facultyId,&f1.facultyName,&f1.facultyCourse,&f1.facultyEducation);

		printf("%d",f1.facultyId);



		printf("\n\n\nID : %d\nNAME : %s\nCOURSE : %s\nEDUCATION : %s",f1.facultyId,f1.facultyName,f1.facultyCourse,f1.facultyEducation);

		printf("\nADD MORE (Y/N)\n");
		char chr=getch();
		if(chr=='N' || chr=='n')

		{
			iAdministration();
		}
	}
	fclose(fp);

}


void iGuest()
{   system("cls");
    printf("\t\t\t\t\t** LOG IN AS **\n\n\n");
    printf("\t\t\t\t\ * 1.TRAINEE:\n\n");
    printf("\t\t\t\t\ * 2.FACULTY:\n\n");
    printf("\t\t\t\t\ * 3.DEPARTMENTAL HEAD:\n");
    int k;
    printf("\n\t\t\t");
    scanf("%d",&k);
    switch(k)
    {
        case 1: iTrainee();
                break;

        case 2: iFaculty();
                  break;

        case 3: departmentalHead();
                  break;

        default:  printf("Enter valid choice\n");
                          break;

    }
}
void iTrainee()
{   system("cls");
    system("COLOR 0A");

    printf("\t\t\t\t\ ** 1.REGISTER :\n\n\n");
    printf("\t\t\t\t\ ** 2.LOG IN :\n\n\n\n\n\n\n");
   // printf("\t\t\t\t\ ** 3.FORGET USERNAME    OR    FORGET PASSWORD :\n");
    int z;
    printf("\n\t\t\t");
    scanf("%d",&z);
     switch(z)
    {
        case 1: iRegistration();
                  break;

       case 2: iLoginT();
                break;

        /*case 3: iForgetpass();
                break;*/

        default:  printf("Enter valid choice\n");
                  break;
    }
}
void iRegistration(void)
{   system("cls");
      struct TraineeData k;
            printf("\t\t\t=================================================\n");
		printf("\t\t\t\t  REGISTRATION\n");
		printf("\t\t\t=================================================\n\n");

		 FILE *fp;
      fp=fopen("trainee.txt","a+");

      /*printf("Enter the Employee ID :");
      fflush(stdin);
      gets(k.Id);
      fprintf(fp,"\n%s",k.Id);*/

      printf("\t\t\t\t Enter the  Username :\n\t\t\t\t: \n");
      fflush(stdin);
      gets(k.username);
      fprintf(fp,"%s",k.username);

      printf("\t\t\t\t Enter the Password :\n\t\t\t\t:");
      fflush(stdin);
      gets(k.password);
      fprintf(fp,"\t%s\n",k.password);
      fclose(fp);
      printf("\n\t\t\t Registration Successful .....!");
      iLoginT();

}
void iLoginT()
{     struct TraineeData k;
      system("cls");
      FILE *fp;
      fp=fopen("trainee.txt","r");
      char username[100];
      char password[100];
      printf("\t\t\t=============================================\n");
	printf("\t\t\t\t\t TRAINEE LOGIN\n");
	printf("\t\t\t=============================================\n");
      printf("\t\t\tEnter the Username : ");
      fflush(stdin);
      gets(username);
      fscanf(fp,"%s",k.username);
      fscanf(fp,"\t%s",k.password);
      if(strcmp(k.username,username)==0)
      {
      printf("\n\t\t\tEnter the Password : ");
      fflush(stdin);
      gets(password);
            if(strcmp(k.password,password)==0)
            {
                  traineeHome(k.username);
            }
      }
}
void traineeHome(char username[])
{     system("cls");
      system("COLOR 0E");
      char iUsername[100];
      strcpy(iUsername,username);
      struct TraineeData k;
      time_t currentime;
	time(&currentime);
      printf("\t\t\t\t   ** Welcome Mr./Mrs. %s **",iUsername);  printf("\t\t  %s",ctime(&currentime));
      printf("\t\t\t============================================\n");
      int choice;
      printf("\n\t\t\tPress 1 to Logout");
      printf("\n\t\t\t");
      scanf("%d",&choice);
      switch(choice)
      {
            case 1: printf("\n\n\t\t\tSure want to log out...!\n");
                    printf("\t\t\tY/N");
                        char chr1=getch();
                        if(chr1=='N' || chr1=='n')
                        {
                              traineeHome(iUsername);
                        }
                        else
                        {
                              iGuest();
                        }
      }


}
void iFaculty()
{     system("cls");
      printf("\t\t\t=============================================\n");
	printf("\t\t\t\t\t FACULTY LOGIN\n");
	printf("\t\t\t=============================================\n");
	struct facultyData a;
	char username[100];
	char password[100];
	FILE *fp;
	fp=fopen("FacultyData.txt","r");

	fscanf(fp,"%s\t%s",a.username,a.password);

	printf("\n\t\t\tEnter the Username :");
	fflush(stdin);
	gets(username);
	if(strcmp(a.username,username)==0)
	{
      printf("\n\t\t\tEnter the Password :");
      fflush(stdin);
	gets(password);
      if(strcmp(a.password,password)==0)
      {
            facultyHome(a.username);
      }
	}
}
void facultyHome(char username[])
{
       system("cls");
      system("COLOR 09");
      char iUsername[100];
      strcpy(iUsername,username);
      struct TraineeData k;
      time_t currentime;
	time(&currentime);
      printf("\t\t\t\t   ** Welcome Mr./Mrs. %s Sir**",iUsername);  printf("\t\t  %s",ctime(&currentime));
      printf("\t\t\t============================================\n");
      int choice;
      printf("\n\t\t\tPress 1 to Logout");
      printf("\n\t\t\t");
      scanf("%d",&choice);
      switch(choice)
      {
            case 1: printf("\n\n\t\t\tSure want to log out...!\n");
                    printf("\t\t\tY/N");
                        char chr1=getch();
                        if(chr1=='N' || chr1=='n')
                        {
                              facultyHome(iUsername);
                        }
                        else
                        {
                              iGuest();
                        }
      }
}
void departmentalHead()
{     system("cls");
      system("COLOR 09");
      printf("\t\t\t=============================================\n");
	printf("\t\t\t\tDEPARTMENTAL HEAD LOGIN\n");
	printf("\t\t\t=============================================\n");
	struct departmentalHeadData b;
	char username[100];
	char password[100];
	FILE *fp;
	fp=fopen("dphead.txt","r");
	fscanf(fp,"%s\t%s",b.username,b.password);

	printf("\n\t\t\tEnter the Username :");
	fflush(stdin);
	gets(username);
	if(strcmp(b.username,username)==0)
      {
            printf("\t\t\tEnter the Password :");
            fflush(stdin);
            gets(password);
            if(strcmp(b.password,password)==0)
            {
                  dhHome(b.username);
            }
      }


}
void dhHome(char username[])
{

       system("cls");
      system("COLOR 07");
      char iUsername[100];
      strcpy(iUsername,username);
      struct TraineeData k;
      time_t currentime;
	time(&currentime);
      printf("\t\t\t\t   ** Welcome Mr./Mrs. %s Sir**",iUsername);  printf("\t\t  %s",ctime(&currentime));
      printf("\t\t\t============================================\n");
      int choice;
      printf("\n\t\t\tPress 1 to Logout");
      printf("\n\t\t\t");
      scanf("%d",&choice);
      switch(choice)
      {
            case 1: printf("\n\n\t\t\tSure want to log out...!\n");
                    printf("\t\t\tY/N");
                        char chr1=getch();
                        if(chr1=='N' || chr1=='n')
                        {
                              dhHome(iUsername);
                        }
                        else
                        {
                              iGuest();
                        }
      }
}
/*void facultyLogout()
{
       printf("\n\nSure want to log out...!\n");
      printf("Y/N");
      char chr1=getch();
	if(chr1=='N' || chr1=='n')
	{
            facultyHome();
	}
	else
      {
             iGuest();
      }
}

void traineeLogout()
{
      printf("\n\nSure want to log out...!\n");
      printf("Y/N");
      char chr1=getch();
	if(chr1=='N' || chr1=='n')
	{
            traineeHome();
	}
	else
      {
            iGuest();
      }

}


void dhLogout()
{
       printf("\n\nSure want to log out...!\n");
      printf("Y/N");
      char chr1=getch();
	if(chr1=='N' || chr1=='n')
	{
            dhHome();
	}
	else
      {
            iGuest();
      }
}*/
