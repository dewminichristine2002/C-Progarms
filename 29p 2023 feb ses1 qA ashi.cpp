#include <stdio.h>
#include <string.h>

void reverse(char rev[], int length);

int main() {
    char letter[20];
    int length, i;

    printf("Enter a text: "); //scanf ("%s", letter) cannot be given cuz it doesn't include whitespaces
                              // so we use getchar () function
    for (i = 0; i < 19; i++) {
        letter[i] = getchar();
        if (letter[i] == '\n')  //??
		{
            break;
        }
    }

    length = strlen(letter);

    reverse(letter, length);

    printf("Reversed Array: ");
    for (i = 0; i < length; i++) {
        putchar(letter[i]);
    }
  

    return 0;
}

void reverse(char rev[], int length) {
    int a, b;
    char temp;

    for (a = 0, b = length - 1; a < b; a++, b--) {
        temp = rev[a];
        rev[a] = rev[b];
        rev[b] = temp;
    }
}
