//break statement

#include <stdio.h>

int main(){
	
	int x=1;
	
	while(x<=10){
		
	printf ("Enter Number : ");
	scanf ("%d", &x);
	
		if (x==5){
			break;
		}
		
	printf ("%d\n", x);
	
	++x;
		
	}
	
return 0;	
}
