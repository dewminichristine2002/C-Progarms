// array tutorial 9 ex 4

#include <stdio.h>

int main(){
	
	int arr1[4][4]={{5,7,8.10}, {9,3,0,6}, {8,1,9,2}, {4,7,2,1}};
	int arr2[4][4]={{2,2,1,3}, {8,1,3,1}, {1,2,2,4}, {3,1,1,2}};
	int arr3[4][4];
	
	int i,j;
	
	for (i=0; i<4; ++i){
		for (j=0; j<4; ++j){
			
			arr3[i][j]= arr1[i][j]+arr2[i][j];
			printf ("%d\t", arr3[i][j]);
		}
	printf ("\n");	
	}
	return 0;
}
