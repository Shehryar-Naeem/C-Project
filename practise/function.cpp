#include<iostream>
using namespace std;

int sum (int, int);
int main(void)
{
	int num1,num2;
	cout<<"Please enter the number1"<<endl;
	cin>>num1;
	cout<<"Please enter the number2"<<endl;
	cin>>num2;
	sum(num1,num2);
	return 0;
}
int sum(int a,int b){
	int c=a+b;
	cout<<c;
}
