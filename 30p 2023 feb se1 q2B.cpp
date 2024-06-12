//2023 feb ses1 q2 B

#include <stdio.h>

int main(){
	
    float sales[2][3];
    int i,j,max;
    float s1=0,s2=0;
    
    for (i=0; i<2; ++i){
    	printf ("Enter sales amount of sales person %d.\n", i+1);
    	
    	for(j=0; j<3; ++j){
    		printf ("\t\tProduct %d: ", j+1);
    		scanf ("%f", &sales[i][j]);	
		}
	}
    printf ("The sales amount of 2 person for 3 products.\n");
    
     for (i=0; i<2; ++i){
    	
    	for(j=0; j<3; ++j){
    		printf ("%.2f\t\t", sales[i][j]);	
		}
		printf ("\n");
	}
    
    for (j=0; j<3; ++j){
    	s1=s1+sales[0][j];
	}
	 for (j=0; j<3; ++j){
    	s2=s2+sales[1][j];
	}
	 if (s1>s2){
	 	max=1;
	 }
	 else if (s2>s1){
	 	max=2;
	 }
	 else 
	 {printf ("no max.");}
	
	  
	printf ("The sales person with the highest sales amount is sales person %d", max);
	
	return 0;
	
}
