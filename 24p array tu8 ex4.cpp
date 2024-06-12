// array tutorial 08 ex 4 

#include <stdio.h>

int main(){
	
	int i,j;
	int arr[10];
	
	for (i=0; i<10; ++i){
	
	printf ("Input Number: ");
	scanf ("%d", &arr[i]);
}
 printf ("Element\t Value\t Histogram");
 
 for (i=0; i<10; ++i){
 	
 	printf ("\n%d\t %d\t ", i,arr[i]);
 	
 	for (j=1; j<=arr[i]; ++j){
 		printf ("*");
	 }
	 printf("\n");
 }
return 0;
}
