//initializing the elements of an array to zero

#include <stdio.h>

int main(){
	
int n[5];
int i;

for (i=0; i<5; ++i){
	
	n[i]=0;
	printf ("%d%13d\n", i,n[i]);    //13d means spaces
		
}
return 0;
}
