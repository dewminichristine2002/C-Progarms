

#include <stdio.h>
#include <string.h>

int main(){
	
	int i,j,x=0;
	char str1[10];
	char str2[10];
	
	printf ("Input a word : ");
	scanf ("%s", str1);
	
	for (j=0; j<strlen(str1); ++j){
		
		str2[j] = str1[j+ strlen(str1)-x];
		++x;
		
	}
	  
	if (str1==str2){
		printf ("%s is a palindrome", str1);
	}
	else 
	printf ("%s is not a palindrome", str1);

	
	return 0;
}
