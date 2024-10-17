//electricity bill calcultion
#include<stdio.h>
float TotalBill(int unitConsumed, float chargePerUnit)
{
	return unitConsumed * chargePerUnit;
}
float Surcharge(float totalbill)
{
	totalbill * 0.15;
}
int main(){
	int customerId,unitconsumed;
	char customername [50];
	float chargeperunit,surcharge=0,totalbill;
	
	printf("Enter the Customers name:");
	scanf("%s",customername);
	
	printf("Enter customers id no:");
	scanf("%d",&customerId);
	
	printf("Enter the unitconsumed:");
	scanf("%d",&unitconsumed);

	
	//determining charge per unit
	
	if (unitconsumed <=199){
	   chargeperunit = 1.20;}
	
	else if(unitconsumed >=200 && unitconsumed <=400) {
        chargeperunit = 1.50;}	
        
	else if(unitconsumed>=400 && unitconsumed <=600) {
	   chargeperunit = 1.80;}
	   
	else {
	 chargeperunit = 2.00;
	 }

	//calculate the total bill
totalbill = TotalBill(unitconsumed,chargeperunit);

	//if total bill exceeds 400 shillings,15% surcharge is charged
	if (totalbill >400){
		surcharge=Surcharge(totalbill);
		totalbill+=surcharge;
	 
		//the minimum should be 100
	if (totalbill <100){   
	     totalbill=100;
		 
		 	
		 }
		 	
		 }
		 
		 	
		 
		printf("Customers Id:%d\n",customerId);
		printf("Customers name:%s\n",customername);
		printf("Units consumed:%d\n",unitconsumed);
		printf("Charge per unit:%.2f\n",chargeperunit);
		printf("Total bill:%.2f\n",totalbill);
		
	

	 return 0;
	 }
	 
	 