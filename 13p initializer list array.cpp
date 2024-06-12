//array initializer list

#include <stdio.h>

int main(){
	
int n[5]={1,45,67,89,45};
int i;

for (i=0; i<5; ++i){
	
	printf ("n[%d]%10d\n", i,n[i]);    //10d means spaces
		
}
return 0;
}
