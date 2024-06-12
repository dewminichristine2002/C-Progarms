//2023 feb session 1 q2

#include <stdio.h>
#include <string.h>

 int main(){
 	
 	int x,i;
 	char strings[20];
 	
 	printf ("Input a Text : ");
 	scanf ("%s", strings);
 	
 	x=strlen(strings);
 	printf ("%d\n", x);
 	
 	
 	for (i=0; i<x; ++i){
 		strings[i]=strings[(x-1)-i];
	 }
 	
 	printf ("%s", strings);
 	
 	return 0;
 }
