//array strings and characters

#include <stdio.h>
#define SIZE 8

int main(){
	
	char str1[]= "dewmini christine";
	char str2[]= {'a','m','m','m','a'};
	char str3[5];
	char str4[SIZE]= "gorilla";
	
	printf ("Enter 4 letter word : ");
	scanf ("%s" , str3); //just put the array name no need of &
	
	printf ("%s\n", str1);
	printf ("%s\n", str2);
	printf ("%s\n", str3);
	printf ("%c\n", str1[0]);
	
	int i;
	
	for (i=0; i<SIZE && str4[i]!= '\0'; ++i){
		printf ("%c", str4[i]);
	}
return 0;
}
