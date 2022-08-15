#include<iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	cout<<"Please enter the value of num1,num2,num3 :";
	cin>>num1>>num2>>num3;
		if(num1>num2 && num1>num3){
			cout<<"\n The greatest value is: "<<num1<<endl;
		}else if(num2>num1 && num2>num3){
			cout<<"The greatest value is: "<<num2<<endl;
		}else{
			cout<<"The greatest value is: "<<num3<<endl;
		}
	return 0;
}
