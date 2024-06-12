//array tutorial 8 ex1

#include <stdio.h>

int main(){
	
	int i,sum=0;
	float mean=0;
	int arr[10]; 
	
	for (i=0; i<10; ){
	
	printf ("Enter the Marks : ");
	scanf ("%d", &arr[i]);
	
	if (arr[i]>=0 && arr[i]<=20){
		sum=sum+ arr[i];
       ++i;	    
   }
   else
   continue;
}
 mean= sum/10.0;
 
    for (i=0; i<10; ++i){
   	  printf ("marks= %d, ", arr[i]);
   }
 printf ("\nSum= %d", sum);
 printf ("\nMean= %.2f", mean);  
   return 0;
}
