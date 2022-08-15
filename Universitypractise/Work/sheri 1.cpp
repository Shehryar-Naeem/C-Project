#include<iostream>
using namespace std;

int main (void)
{
//	string newArr[5]={"Shehryar","Kashan","Mateen","Hassan","subtain"};
//	for(int i=0;i<=4;i++){
//		cout<<newArr[i]<<endl;
//	}	
	float num[9],sum=0.0,average;
	for(int i=0;i<10;i++){
		cout<<i+1<<"-Enter number: ";
		cin>>num[i];
		sum+=num[i];
	}
	average=sum/10;
	cout<<"Average ="<<average;
	return 0;
}
