#include<iostream>
using namespace std;

int main (void)
{
	int i,n;
	float arr[i];
	cout<<"Enter total number of elements: ";
	cin>>n;
	for(i=0;i<n;++i){
		cout<<"Enter Number "<<i+1<<" :";
		cin>>arr[i];
		cout<<i<<" 'This is the store array' "<<arr[i]<<endl;
	}
	//loop to store largest number to arr[0]
	for(i=0;i<n;++i){
		cout<<i<<" 'store array' "<<arr[i]<<endl;
		if(arr[0]<arr[i]){
			arr[0]=arr[i];

		}
	}
	cout<<"Largest element ="<<arr[0];
	return 0;
}
