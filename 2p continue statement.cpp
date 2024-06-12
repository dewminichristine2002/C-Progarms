// continue statement(then the value is gonna get skipped)

#include <stdio.h>

int main(){
	
int x=1,y=1;

while (y<=10){
	
printf ("Enter Number : ");
scanf ("%d",&x);

  if (x==5){
	++y;
	 continue;
  }
  
printf ("%d\n", x);
++y;
	
}
return 0;

}
