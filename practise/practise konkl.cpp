#include<iostream>
using namespace std;


int max(int num1,int num2){
	int result;
	if(num1>num2){
		result=num1;
	}else{
		result=num2;
	}
	return result;
}

int main(void)
{
	int a,b;
	int ret;
	cout<<"Please enter value of a: ";
	cin>>a;
	cout<<"Please enter value of b: ";
	
	cin>>b; 
	ret=max(a,b);
	cout<<"max value is "<<ret<<endl;
	return 0;	
}


