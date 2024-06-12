//array tutorial 9 ex3

#include <stdio.h>

int main(){
	
	int p[5]={0};
	int arr[4][5];
	int i,j;
	
	for (i=0; i<4; ++i){
		printf ("The Sales person Number : %d\n", i+1);
		
		for (j=0; j<5; ++j){
			printf ("Product No. %d number of products sold : ", j+1);
			scanf ("%d", &arr[i][j]);	
		}	
	}
	for (j=0; j<5; ++j){
		for (i=0; i<4; ++i){
			p[j]=p[j]+arr[i][j];
		}	
	}
	
	printf ("\n\tP1\tP2\tP3\tP4\tP5\n");
	
	for (i=0; i<4; ++i){
		printf("SP%d\t",i+1);
		
		for (j=0; j<5; ++j){
			printf ("%d\t", arr[i][j]);
		}
		printf ("\n");	
	}
	
	for (j=0; j<5; ++j){
		printf ("\nSales of Product %d : %d\n",j+1, p[j]);
	}
	
	return 0;
}
