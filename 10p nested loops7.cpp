// nested iteration7

#include <stdio.h>

int main(){
	
int i,j;

for (i=2; i<=8; ){
	
	for (j=1; j<=i; ++j){
	
	printf ("%d", j);
   }
   i=i+2;
printf ("\n");   
}
return 0;
}
