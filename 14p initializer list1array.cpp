//array initializer list1

#include <stdio.h>

int main(){
	
int n[5]={0};
int i;

for (i=0; i<5; ++i){
	
	printf ("n[%d]%10d\n", i,n[i]);    //10d means spaces
		
}
return 0;
}
