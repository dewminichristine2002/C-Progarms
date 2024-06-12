#include <stdio.h> 
#include <string.h>

int main() 
{ 
char strings [20]; 
int length, i;

printf("Enter a text: "); 
scanf("%20s", strings);

/*

//seperating letters of the input 
for (i=0; strings[i] != '\0'; i++) 
{ // \0 indicates new line character printf("%c", strings[i]); //output

} */ 
length = strlen(strings);

for (i = 0; i < length / 2; i++) {

char temp = strings[i]; 
strings[i] = strings [length-i-1]; 
strings[length - i - 1] = temp; 
}

printf("Reversed text: %s\n", strings);

return 0;

}
