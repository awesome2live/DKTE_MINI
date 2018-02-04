#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
	time_t curtim;
	time(&curtim);
	
	printf("%s",ctime(&curtim));
	
	//getdate(&d);
	//*storing date in structured*//
//	printf("Current System Date is:-%d/%d/%d",d.da_Day,d.da_Month,d.day_Year);
	getch();
	return 0;
}
