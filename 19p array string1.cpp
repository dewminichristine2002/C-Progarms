// strlen() doesnt inclue \0 but saces are included , strcpy()

#include <stdio.h>
#include <string.h>

int main(){
	 
	char str1[]= "He who made me a queen, my thaththa";
	 
	 int x;
	 x= strlen(str1);
	
	char str2[x];
	
	strcpy(str2 ,str1);
	
	printf ("%s", str2);
}
