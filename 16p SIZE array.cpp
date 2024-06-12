//get the sum of the elements of the array

#include <stdio.h>
#define ASIZ 5

int main(){

int arr[ASIZ];
int i,sum=0;

for (i=0 ; i<ASIZ; ++i){
	
	printf ("Enter Number arr[%d] : ", i);
	scanf ("%d", &arr[i]);
	
	sum=sum+ arr[i];
}
printf ("Sum= %d",sum);

return 0;
}
