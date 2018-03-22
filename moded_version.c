#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
     int totalCourses=0,num=0,choice,i,j,che,r=0,ch,count[9]={0,0,0,0,0,0,0,0,0},k=0,q=0,v=1;
     int dept[9][20]={{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
     char str[100];
     char department[9][100]=
                    {
                    "Software Development",
                    "Hardware & Networking",
                    "Web Development",
                    "Cloud Security ",
                    "Software Testing ",
                    "Networking",
                    "Web Analytics & Digital",
                    "DATABASE Administrator",
                    "Grey Hat "
                   };
      char courses[20][100]=
                   {"Master JAVA",
                    "Master PYTHON",
                    "Big Data HADOOP",
                    "Network Security",
                    "Repair & Maintenance",
                    "Embedded System Design",
                    "Angular 5",
                    "JAVA Web & Micro Service",
                    "Oracle Cloud",
                    "Cloud Fundamentals",
                    "Selenium 3.0",
                    "Networking Essentials",
                    "Routing And Switching",
                    "Fund. of Web Analy.",
                    "Business Prespective",
                    "DATA Series:Power of BI",
                    "Big DATA:HADOOP",
                    "Big DATA: AZURE",
                    "Computer Forensics ",
                    "Configuring Firewall"
                 };
    system("COLOR FC");
    getch();
printf("-* PLEASE ENTER YOUR NAME *-\n");
gets(str);

 //if(str[0]!=' ' && str!='\0' && str[0]!=13 && (str[0]<=32 || str[0]>=64) && (str[0]<=91 || str[0]>=96) && (str[0]<=123 || str[0]>=126))
   // {
                                        system("cls");

                                         printf("                  %c%c Hello %s, Welcome For Our Courses %c%c.\n\n\n",v,v,str,v,v);

                       do
                          {
                             printf("                            1. select departments\n                            2. De-select departments\n\n");
                             printf("              <----------------Enter the choice-------------------->\n                                ");
                              system("COLOR 4C");
                                getch();
                             scanf("%d",&choice);
                             switch(choice)
                               {
                                 case 1:
                                      {
                                         printf("               * * * * *  SELECT THE DEPARTMENT BELOW* * * * * *  \n\n");
                                         printf("\n               1 -Software Development \n               2 -Hardware & Networking \n               3 -Web Development \n               4 -Cloud Security \n               5 -Software Testing \n               6 -Networking \n               7 -Web Analytics & Digital \n               8 -DATABASE Administrator\n               9 -Grey Hat System Administration \n                 Any other number to exit\n\n\n");
                                         printf("              <----------------Enter the choice-------------------->\n                                ");
                                         scanf("%d",&che);
                                         switch(che)
                                            {
                                             case 1:
                                                {
                                          printf("\n        * * * * *  SELECT THE COURSE BELOW FOR SOFTWARE DEVELOPMENT* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -Master JAVA \n                  2 -Master PYTHON \n                  3 -Big Data HADOOP \n                    -Prof. K.V. RAJAN.B Tech PhD,\n                     Assistant Professor of Software Development \n                  * Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch-1]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch-1]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch-1]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }

                                                else if(ch==3)
                                                       {
                                                          printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                         scanf("%d",&num);
                                                         if(num==1)
                                                          {
                                                            dept[che-1][ch-1]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                          printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                       }
                                                       else
                                                       {
                                                           printf("\n                  EXIT FROM SOFTWARE DEVELOPMENT\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=3);
                                           break;
                                     }
                              case 2:
                                      {
                                         printf("\n        * * * * *  SELECT THE COURSE BELOW FOR HARDWARE & NETWORKING* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                1 -Network Security \n                  2 -Repair and maintenance\n                  3 -Embedded System Design \n                    -Prof. R.S. SHAHA. \n                    M Tech PhD, \n                    Head of department.\n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+2]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+2]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch+2]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }

                                                else if(ch==3)
                                                       {
                                                          printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                         scanf("%d",&num);
                                                         if(num==1)
                                                          {
                                                            dept[che-1][ch+2]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                          printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                       }
                                                       else
                                                       {
                                                           printf("\n                  EXIT FROM HARDWARE AND NETWORKING\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=3);
                                          break;
                                      }
                              case 3:
                                      {
                                           printf("\n        * * * * *  SELECT THE COURSE BELOW FOR WEB DEVELOPMENT* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -Angular 5 \n                  2 -JAVA Web Service and JAVA EE Micro Service \n                    -Prof.Y.K.SING. \n                    B Tech PhD, \n                   Head of department \n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+5]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+5]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch+5]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }

                                                else
                                                       {
                                                           printf("\n                  EXIT FROM HARDWARE AND NETWORKING\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=2);
                                          break;
                                      }
                              case 4:
                                      {
                                           printf("\n        * * * * *  SELECT THE COURSE BELOW FOR CLOUD SECURITY* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -Oracle Cloud \n                  2 -Cloud Fundamentals\n                    -Prof. R.S. SHARMA.\n                    M Tech PhD,\n                    Assistant Professor of Software Testing\n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+7]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+7]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch+7]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }

                                                   else
                                                       {
                                                           printf("\n                  EXIT FROM CLOUD COMPUTING\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=2);
                                          break;
                                      }
                              case 5:
                                     {
                                          printf("\n        * * * * *  SELECT THE COURSE BELOW FOR SOFTWARE TESTING* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -Selenium \n                    -Prof. D.M.RAYSONI.\n                    M Tech PhD,\n                    Head of department.\n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+9]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+9]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                   else
                                                       {
                                                           printf("\n                  EXIT FROM SOFTWARE TESTING\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=1);
                                         break;
                                     }
                              case 6:
                                      {
                                           printf("\n        * * * * *  SELECT THE COURSE BELOW FOR NETWORKING* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -Networking Essentials \n                  2 -Routing And Switching\n                    -Prof. P.I.VERMA\n                    M Tech PhD.\n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+10]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+10]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch+10]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }

                                                       else
                                                       {
                                                           printf("\n                  EXIT FROM NETWORKING\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=2);
                                          break;
                                      }
                              case 7:
                                      {
                                           printf("\n        * * * * *  SELECT THE COURSE BELOW FOR WEB ANALYTICS AND DIGITAL* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -Fundamental  of Web Analytics \n                  2 -Business Prespective\n                    -Prof. A.S.CHAND\n                    B Tech PhD,\n                    Head of department.\n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+12]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+12]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch+12]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }


                                                       else
                                                       {
                                                           printf("\n                  EXIT FROM WEB ANALYTICS AND DIGITAL\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=2);
                                          break;
                                      }
                              case 8:
                                     {
                                          printf("\n        * * * * *  SELECT THE COURSE BELOW FOR DATABASE ADMINISTRATOR* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -DATA Series: Analytics :BI: Power of  BI \n                  2 -Big DATA:HADOOP on HD Insight\n                  3 -Big DATA: AZURE Data Lake \n                    -Prof. L.S.PANDIT\n                    B Tech PhD,\n                    Head of department. \n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+14]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+14]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch+14]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }

                                                else if(ch==3)
                                                       {
                                                          printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                         scanf("%d",&num);
                                                         if(num==1)
                                                          {
                                                            dept[che-1][ch+14]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                          printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                       }
                                                       else
                                                       {
                                                           printf("\n                  EXIT FROM DATABASE ADMINISTRATOR\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=3);
                                         break;
                                     }
                              case 9:
                                     {
                                          printf("\n        * * * * *  SELECT THE COURSE BELOW FOR Grey Hat System Administration* * * * * *  \n");

                                            do
                                            {
                                                printf("\n                  1 -computer forensics \n                  2 -configuring firewall\n                    -Prof. R.B.SING.\n                    B Tech PhD,\n                    Head of department.\n                    *Any other number to exit\n\n");
                                                printf("              <----------------Enter the choice-------------------->\n                                ");
                                               scanf("%d",&ch);
                                                if(dept[che-1][ch+17]==0)
                                                {


                                                if(ch==1)
                                                    {




                                                            printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                            scanf("%d",&num);
                                                          if(num==1)
                                                            {
                                                              dept[che-1][ch+17]=1;
                                                              ++totalCourses;
                                                              count[che]++;
                                                            }
                                                           printf("\n                  Your join courses are :- %d\n",totalCourses);



                                                    }
                                                else if(ch==2)
                                                      {
                                                         printf("                  Are you sure to continue.If 'Yes' Enter 1 else any number\n                  ");
                                                       scanf("%d",&num);
                                                       if(num==1)
                                                          {
                                                            dept[che-1][ch+17]=1;
                                                           ++totalCourses;
                                                           count[che]++;
                                                          }
                                                       printf("\n                  Your join courses are :- %d\n",totalCourses);

                                                      }


                                                       else
                                                       {
                                                           printf("\n                  EXIT FROM HARDWARE AND NETWORKING\n");
                                                           break;
                                                       }
                                                }
                                                else
                                                        {
                                                            printf("You are already enrolled for this course so enrolled another course");
                                                        }


                                            }while(ch<=2);
                                         break;
                                     }

                              default:
                                   {
                                       printf("EXIT FROM DEPARTMENT\n");
                                       break;
                                   }

                          }
                        break;
                    }
         }

     }

     while(choice==1 || choice==2);
     system("COLOR FC");
    getch();

    printf("%s's course\n",str);
    printf("Id       Departments                      course                   totalCourses\n\n");
    for(j=0;j<9;j++)
    {
        int m,n,h=0;
        printf("\n");
        m=printf("%d       %s",j+1,department[j]);
       //printf("  %d",m);
       if(count[j+1]>0)
       {


        do
        {
            if(dept[j][k]==1)
            {
                int z=0,b=0,w=0,e=0,nt=0;
                b=strlen(courses[k]);
                 h=45;
                 //z=m;
                 for(e=0;e<42-m;e++)
                  {
                      printf(" ");
                      ++nt;

                  }
                 printf("%d. %s",r+1,courses[k]);
                 while(q<1)
                 {
                    for(z=0;z<(72-(m+b+nt));z++)
                  {
                      printf(" ");

                  }
                  printf("%d",count[j+1]);
                  q++;
                 }

                  printf("\n");
                 for(w=0;w<m;w++)
                 printf(" ");
                    ++r;
            }

           k++;
        }while(k<20);
        k=0;
        q=0;

        printf("\n");
       }
    }
    printf("\n\n");
        //}
        /*else
            {
                printf("\n ENTER THE VALID NAME\n");
            }*/
}
