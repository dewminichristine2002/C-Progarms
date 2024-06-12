//array tutorial 08 ex 3 (rotating)

#include <stdio.h>
#define SIZE 5

int main(){

int motion[SIZE];
int i, j;

for (i=0; i<SIZE; ++i){
	printf ("Enter Value: ");
	scanf ("%d", &motion[i]);
}

j= motion[0];

for (i=1; i<SIZE; ++i){
	
	motion[i-1]=motion[i];
	}
motion[SIZE-1] = j;

printf ("After rotating\n");

for (i=0; i<SIZE; ++i){
	printf ("%d ", motion[i]);
}	

return 0;

}

