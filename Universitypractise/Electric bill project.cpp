/*Write a program that creates a class to display electricity bill.The class should take customer name,
billnumbers,units consumed as inputs and displays the inputs value and the bill amount which is 
calculated after multiplying the unit consumed with per unit price.
if unit consumed are less than 300 the per unit price is Rs.4; if greater than or equal to 300 but less 
than 1000 the per unit price is Rs.5.if units consumed are greater than 999, the per unit price is 
Rs.7.*/
#include<iostream>
using namespace std;

class calBill{
	private:
	string customerName;
	int billNumber;
	int unitConsumed;
	int calculation;
	
	public:
	void calculationBill();
	void totalCalculation();	
};
void calBill::calculationBill(){
	cout<<"Enter the name of electricity biller: ";
	cin>>customerName;
	cout<<"Enter the number of electricity biller: ";
	cin>>billNumber;
	cout<<"Enter the number of consumed units of electricity biller: ";
	cin>>unitConsumed;
	if(unitConsumed<=300){
		calculation=unitConsumed*4;
	}else if(unitConsumed>300&&unitConsumed<=1000){
		calculation=1200+(unitConsumed-300)*5;		
	}else{
		calculation=4700+(unitConsumed-1000)*7;	
	}
}
void calBill::totalCalculation(){
	cout<<"\n\n";
	cout<<"\tInformation about electricity biller"<<endl;
	cout<<"\n\t 1.Name of consumer is :"<<customerName;
	cout<<"\n\t 2.Consumer number is :"<<billNumber;
	cout<<"\n\t 3.Unit consumed is :"<<unitConsumed;
	cout<<"\n\t 4.Total amount is :"<<calculation;
}
int main()
{
	calBill billing;
	billing.calculationBill();
	billing.totalCalculation();
	return 0;
}
