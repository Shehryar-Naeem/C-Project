#include<iostream>
using namespace std;
void max(int array[],int n){
	int max=array[0];
	int min=array[0];
	for(int i=1;i<n;i++){
		if(max<array[i]){
			max=array[i];
			
		}
	}
	cout<<"max number is: "<<max<<endl;
	for(int i=1;i<n;i++){
		if(min>array[i]){
			min=array[i];
			
		}
	}
	cout<<"min number is: "<<min<<endl;
	
}
int main(){
	int n;
	cout<<"Please enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Please enter the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	max(arr,n);
	return 0;
}
