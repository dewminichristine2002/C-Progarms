//finding the max when 10 values are stored in an array

#include <stdio.h>

int main(){
	
	int arr[10]={0} ;
	int i,max=0,x=0;
	
	for (i=0; i<10; ){
		printf ("Enter Number: ");
		scanf ("%d", &arr[i]);
		
		if (arr[i]>=10 && arr[i]<=100){
             
		x=arr[i];
		   if (x>=max) {
		   	max= arr[i];
		   	++i;
		   }	
	   	}
	    
		else {
		   continue;
		}
    }
	printf ("MAX= %d", max);		
	return 0;
}
