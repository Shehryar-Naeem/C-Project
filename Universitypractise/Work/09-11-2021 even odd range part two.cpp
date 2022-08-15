#include<iostream>
using namespace std;

int main()
{
	int num1,num2;
	int even=0 ,odd=0;
	cout<<"Enter the value of num1: ";
	cin>>num1;
	cout<<"Enter the value of num2: ";
	cin>>num2;
	for(int i=num1;i<=num2;i++){
		cout<<"Your number is: "<<i<<endl;
		int count = i%2;
		if(count==0){
			even++;
		}else if(count==1){
			odd++;
		}
	}
	cout<<"Your range is from "<<num1<<" to "<<num2<<endl;
	cout<<"There are "<<even <<" numbers in between from "<<num1<<"to "<<num2<<endl; 
	cout<<"There are "<<odd <<" numbers in between from "<<num1<<"to "<<num2<<endl;
	return 0;
}
