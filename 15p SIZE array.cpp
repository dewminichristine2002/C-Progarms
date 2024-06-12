//Array's size with a symbolic constant

#include <stdio.h>
#define SIZE 10

int main(){
	
	int a[SIZE];
	int i;
	
	for (i=0; i<SIZE; ++i){
		a[i]=2+2*i;
		
		printf ("n[%d]%5d\n", i,a[i]);
	}
return 0;	
}
