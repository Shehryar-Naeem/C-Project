#include<iostream>
using namespace std;

int main()
{
	int balance,deposit,withDraw_cash;
	balance=30000;
	int option;
	do{
	cout<<endl<<"\n\t***************Menu***************";
	cout<<"\n\t*                                *";
	cout<<"\n\t*         1.Current Balance      *";
	cout<<"\n\t*         2.Cash Deposit         *";
	cout<<"\n\t*         3.WithDraw Cash        *";
	cout<<"\n\t*         4.Transfer             *";
	cout<<"\n\t*         5.Exit                 *";
	cout<<"\n\t*                                *";
	cout<<"\n\t**********************************";
	cout<<"\n\t Please choose an option ";
	cin>>option;
	switch(option){
		case 1:cout<<"\n\tYour current balance is: "<<balance<<endl;
		break;
		case 2:cout<<"\n\tHow many you want to deposit cash :";
		cin>>deposit;
		if(deposit<0){
			cout<<"\n\tPlease enter the correct value"<<endl;
		}else{
			balance +=deposit;
		    cout<<"\n\t Current Balance is :"<<balance<<endl;
		}
		break;
		case 3:cout<<"\n\tHow many you want to withdraw cash :";
		cin>>withDraw_cash;

		if(balance<withDraw_cash){
			cout<<"\n\tYou don't have enough money for withdraw cash"<<endl;
		}else{
		balance -=withDraw_cash;
		cout<<"\n\t Current balance:"<<balance;
		break;
		case 4:cout<<"\n\tThis service is not available"<<endl;
		break;
		case 5:cout<<"\n\tExit"<<endl
		;
		break;
	default:
		if(option!=5){
			cout<<"\n\tInvalid option.Please try again"<<endl;
		}
		}
	}
	}while(option<6);
	return 0;
}


