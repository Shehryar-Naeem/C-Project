#include<iostream>
using namespace std;

int main()
{
	int even1,even2,odd1,odd2;
	cout<<"Please enter the integer numbers: ";
	cin>>even1>>even2>>odd1>>odd2;
	for(;even1<=even2;)
	{
		if(even1%2==0){
			cout<<"These are the even number: "<<even1<<endl;
		}
		even1 =even1+2;
	}
	
	cout<<"\nNow we enter the odd Number"<<endl<<endl;

	for(;odd1<=odd2;)
	{

		if(odd1%2 !=0){
			cout<<"These are the odd number: "<<odd1<<endl;
		}
		odd1=odd1+1;
	}
	return 0;
}
