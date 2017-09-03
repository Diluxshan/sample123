

<<<<<<< HEAD
//   V.dilux
// comment
=======
//   V.dilux 02-09
>>>>>>> 57c8897a23d2dafb77ceb5fa0bcf2f3e791a9d55

#include<stdio.h>
int main()
{
	int a,c,e,f,g,h,i,j;
	float b,d;
	float balance=10000.00;
	
	for(g=0;g<100;g++)
	{
		
	printf("\n\n\t\t   WELCOME TO BANK OF CELON ATM, BAMBAHINNA BRANCH.");
	printf("\n====================================================================================");
	printf("\n\n\t     1-WITRAWALS\t 2-BALANCE INQUERY\t 3-CASH DEPOSIT\n");
	
	printf("\n\tENTER THE CHOICE THAT YOU WANT:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		 printf("\n\t\tWELCOME TO YOUR ACCOUNT");
		 printf("\n\t------------------------------------");
		 printf("\n\t   YOUR BANK BALANCE IS 10,000.00");
		 printf("\n\n\t\tENTER THE AMOUNT: ");
		 scanf("%f",&b);
		 printf("\n\tdo you want the recipt for this transaction...?(1/0) :");
		 scanf("%d",&c);
		 
		// printf("\npress enter to show your recipt");
		 if(c==1)
		 {
 			d=balance-b;
 			printf("\n\n\t      #######################################");
 			printf("\n\t\t           BOC ATM               ");
 			printf("\n\t\t   BAMPAHINNA BRANCH, SRILANKA   ");
 			printf("\n\t\t  =============================  ");
 			printf("\n\t\t  ACCOUNT NO : XXXXXXX5421");
 			printf("\n\t\t  BRANCH     : BAMPAHINNA ATM(BOC)");
 			printf("\n\t\t  TIME       : 12.46 am");
 			printf("\n\t\t  DATE       : 05/09/2016");
 			printf("\n\n\t\t    AMOUNT       : %.2f",b);
 			printf("\n\t\t    BALANCE	 : %.2f",d); 
			printf("\n\n\t\t  THANK YOU FOR YOUR TRANSACTION  ");
 		 	 	printf("\n\n\t      #######################################\n\n");
 		 	 	
 		 	 //	printf("to exit press 1");
 		 	 //	scanf("%d",&f);
 		 	 	
 		 }
		else
		{
			printf("\n\t\t    AMOUNT       : %.2f",b);
 			printf("\n\t\t    BALANCE	 : %.2f",d); 
			printf("\n\t\t  THANK YOU FOR YOUR TRANSACTION  ");
		}
		printf("do you want to continue this transaction??(1/0)");
		scanf("%d",&h);
		if(h==1)
		{
			
		} 
		else	
		{
		
		 g=100;
	      	break;
		}
		
		case 2:
		     	printf("\n\n\t      #######################################");
 			printf("\n\t\t           BOC ATM               ");
 			printf("\n\t\t   BAMPAHINNA BRANCH, SRILANKA   ");
 			printf("\n\t\t  =============================  ");
 			printf("\n\t\t  ACCOUNT NO : XXXXXXX5421");
 			printf("\n\t\t  BRANCH     : BAMPAHINNA ATM(BOC)");
		     printf("\n\t\tYOUR BALANCE IS : %.2f",balance);
		     printf("do you want to continue this transaction??(1/0)");
		scanf("%d",&h);
		if(h==1)
		{
			
		} 
		else	
		{
		
		 g=100;
	      	break;
		}
		
		default:
             printf("\n\n\tSORRY YOUR CHOICE IS NOT WORKING NOW.......!!!");
			 
			 printf("\n\n\tdo you want to continue this transaction??(1/0)");
		scanf("%d",&h);
		if(h==1)
		{
			
		} 
		else	
		{
		
		 g=100;
	    
		}
			
	}
	}
	return 0;
}