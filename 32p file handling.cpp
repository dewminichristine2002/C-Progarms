//writing data to a sequential access file

#include <stdio.h>

int main(){
	
	int number=10;
	
	FILE *cfPtr;   //declare a file pointer
	
	cfPtr = fopen("number.dat","w"); //open the file /also then it creates the file/also the reason should be given
	
	if (cfPtr==NULL)  //checks whether the file is created
	{
		printf ("Cannot create file.\n");
		return -1;
	}
	fprintf (cfPtr, "%d\n", number); //prints on the file
	fclose (cfPtr); //closes the file
	
	return 0;
}
