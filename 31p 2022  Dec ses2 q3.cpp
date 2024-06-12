//2022 dec Session 2 question 3

#include <stdio.h>

float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelCost (int vehicleType, float usedFuelQuota);
void displayDetails (int vType, float usedFuelQuota, float remainingQuota, float cost);

int main(){
	
	float crf,ufq,cfc,cost;
	int vt;
	
	printf ("Vehicle Type : ");
	scanf ("%d", &vt);
	
	printf ("Used fuel Quota: ");
	scanf ("%f" ,&ufq);                 //amboo remember in scanf functions we cant use %.2f
	
	cost= calcFuelCost(vt,ufq);
	
	crf= calcRemainingFuel(vt,ufq);
	
	displayDetails(vt,ufq,crf,cost);
	
	
return 0;	
}


float calcRemainingFuel (int vehicleType, float usedFuelQuota){
	float rf;
	 switch (vehicleType){
	 	case 1: rf=5-usedFuelQuota;
	 	break;
	 	
	 	case 2: rf=20-usedFuelQuota;
	 	break;
	 	
	 	case 3: rf=20-usedFuelQuota;
	 	break;
	 	
	 	case 4: rf=30-usedFuelQuota;
	 	break;
	 	
	 	default : printf ("Invalid vehicle type.");
	 	
	 	return rf;
	 }
	
}

float calcFuelCost (int vehicleType, float usedFuelQuota){
	float fc;
	
	switch (vehicleType){
		case 1: fc= usedFuelQuota*370.00;
		break;
		
		case 2: fc= usedFuelQuota*370.00;
		break;
		
		case 3: fc= usedFuelQuota*510.00;
		break;
		
		case 4: fc= usedFuelQuota*370.00;
		break;
		
		default : ("Invalid vehicle type.");
	}
	return fc;
}

void displayDetails (int vType, float usedFuelQuota, float remainingQuota, float cost){
	
	printf ("Vehicle type\tQuota used\tQuota Remaining\t\tFuel Cost\n");
	printf ("\t%d\t%.2f\t\t%.2f\t\t\t%.2f\n",vType,usedFuelQuota,remainingQuota,cost );

}
