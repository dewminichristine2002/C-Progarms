// 2023 feb session 1 q1

#include <stdio.h>

int main(){
	
	int c,wd;
	float bs,bonus=0,dp;
	char yn='y';
	
	while (yn=='y' || yn=='Y'){
	
	printf ("Employee Category : ");
	scanf ("%d", &c);
	
	if (c==1){
		printf ("Its a performance based bonus.\n");
		printf ("Basic Salery (Rs.) : ");
		scanf ("%f", &bs);
		bonus= 2*bs;
		printf ("Bonus Amount(Rs.) : %.2f",bonus);
	}
	else if (c==2){
		printf ("Temporary staff.\n");
		printf ("Number of working days : ");
		scanf ("%d", &wd); 
		
		if (wd>240){
		
		printf ("Daily Pyment(Rs.): ");
		scanf ("%f", &dp);
		
		bonus= (wd-240)*dp;
		printf ("Bonus Amount(Rs.) : %.2f",bonus);
	}
	    else {
	    printf ("No bonus.\n");	
		}
	}
	else if (c==3){
		printf ("On Contract. \n");
		bonus=50000;
		printf ("Bonus Amount(Rs.) : %.2f",bonus);
	}
	else {
		printf ("Invalid Category.\n");
	}

	
	printf ("\nDo you want to continue? :");
	scanf ("%s", &yn);
}
return 0;
	
}
