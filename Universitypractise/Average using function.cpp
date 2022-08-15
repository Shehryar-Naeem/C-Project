#include<iostream>
using namespace std;

int calAverage(int,int,int);
int calLargestNum(int,int,int);
int calsmallestNum(int,int,int);

int main(void)
{
	int num1,num2,num3;
	cout<<"Please the value of num1: ";
	cin>>num1;
	cout<<"Please the value of num2: ";
	cin>>num2;
	cout<<"Please the value of num3: ";
	cin>>num3;
	cout<<"\n\nCalculate the average of these number"<<endl;
	calAverage(num1,num2,num3);
	cout<<"\n\nCalculate the largest number from these numbers"<<endl;
	calLargestNum(num1,num2,num3);
	cout<<"\n\nCalculate the largest number from these numbers"<<endl;
	calsmallestNum(num1,num2,num3);
	return 0;
}
int calAverage(int num1,int num2,int num3)
{
	int total;
	total=(num1+num2+num3)/3;
	cout<<"The average of "<<num1<<","<<num2<<","<<num3<<" is: "<<total;
}
int calLargestNum(int num1,int num2,int num3)
{
	if(num1>num2 && num1>num3){
		cout<<"\n The greatest value is: "<<num1<<endl;
	}else if(num2>num1 && num2>num3){
		cout<<"The greatest value is: "<<num2<<endl;
	}else{
		cout<<"The greatest value is: "<<num3<<endl;
	}
}
int calsmallestNum(int num1,int num2,int num3){
		if(num1<num2 && num1<num3){
		cout<<"\n The smallest value is: "<<num1<<endl;
	}else if(num2<num1 && num2<num3){
		cout<<"The smallest value is: "<<num2<<endl;
	}else{
		cout<<"The smallest value is: "<<num3<<endl;
	}
}
