/*write a program that inputs 10 integers in an array.it passess all elements of the 
array to a function one by one.
The function displays the actual value of the element and its square.*/ 

#include<iostream>
using namespace std;

int i,totalNoOfArr;
int calSquareFun(int);
int main(void)
{
	int i,totalNoOfArr;
	int integerArr[10];
	cout<<"Please Enter the value of total NO of array: ";
	cin>>totalNoOfArr;
	if(totalNoOfArr<=10){
		cout<<"\nGood,you enter the element of an array"<<endl;
	}else{
		cout<<"\nYou just enter the first ten digits"<<endl;
	} 
	cout<<endl<<endl;
	for(i=0;i<totalNoOfArr;++i)
	{
		cout<<"Enter Number "<<i+1<<":";
    	cin>>integerArr[i];
	}
		for(i=0;i<totalNoOfArr;i++){
		cout<<"At index "<<i<<" before square,the value is:"<<integerArr[i]<<endl;
	}
	cout<<endl<<endl;
	for(i=0;i<totalNoOfArr;i++){
		calSquareFun(integerArr[i]); 
	}
	return 0;
}
int calSquareFun(int integerArr){
	int total;
	total=integerArr*integerArr;
	cout<<integerArr<<" after square,the value is:"<<total<<endl;
}
