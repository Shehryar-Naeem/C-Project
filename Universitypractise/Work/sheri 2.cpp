#include<iostream>
using namespace std;

int main(void)
{
	int arr[5];
	for(int i=0;i<5;++i){
		cout<<"Enter number "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"reverse order"<<endl;
	for(int i=4;i>=0;i--){
		cout<<arr[i]<<endl;
	}
	return 0;
}
