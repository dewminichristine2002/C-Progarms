//initialize 2D array

#include <stdio.h>

int main(){
	
	int arr1[2][3]= {{2,3,4} , {1,2,3}};
	int arr2[][3]= {{6,7,8} , {3,4,5}};
	int arr3[2][3]= {1,2,3,4,5};   //though we just give the values like this it arranges as in the matrix given, 
	                               //if no value it indicates a zero 0 by default
	int arr4[2][3]= {{1,2} , {4}}; //hear also if no value it indicates a zero 0 by default
	
	int i,j;
	
	for (i=0; i<2; ++i){
		for (j=0; j<3; ++j){
			
		printf 	("%d\t", arr1[i][j]);
		}
	printf ("\n");	
	}

printf ("\n");

	for (i=0; i<2; ++i){
		for (j=0; j<3; ++j){
			
		printf 	("%d\t", arr2[i][j]);
		}
	printf ("\n");	
	}
	
printf ("\n");

	for (i=0; i<2; ++i){
		for (j=0; j<3; ++j){
			
		printf 	("%d\t", arr3[i][j]);
		}
	printf ("\n");	
	}	

printf ("\n");

	for (i=0; i<2; ++i){
		for (j=0; j<3; ++j){
			
		printf 	("%d\t", arr4[i][j]);
		}
	printf ("\n");	
	}	 
}
