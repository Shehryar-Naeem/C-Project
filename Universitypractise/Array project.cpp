#include<iostream>
using namespace std;

int main(void)
{
    int i,n,total;
    int arr[5];
    cout<<"Enter the total number of elements ";
    cin>>n;
    for(i=0;i<n;++i)
    {
    	cout<<"Enter Number "<<i+1<<":";
    	cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<"At index "<<i<<" before adding 100,the value is:"<<arr[i]<<endl;
	}
	cout<<"\n";
	for(i=0;i<n;i++){
		total=arr[i]+100;
		cout<<"At index "<<i<<" value is "<<arr[i]<<" after addind 100,the value is:"<<total<<endl;
	}
	
    return 0;
}
