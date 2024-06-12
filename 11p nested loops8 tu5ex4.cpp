// nested iteration8 tutorial5 ex4

#include <stdio.h>

int main(){
	
	int i,j;
	  
for (i=1; i<=7; ++i){
	
	for (j=1; j<=i; ++j){
	printf ("*");	
	}
printf ("\n");	
}	  

for (i=7; i>=1; ){
	
	for (j=1; j<=i; ++j){
	printf ("*");	
	}
i=i-2;
printf ("\n");
	
}
return 0;
}
