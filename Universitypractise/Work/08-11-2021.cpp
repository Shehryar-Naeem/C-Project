#include<iostream>
using namespace std;
void input(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<"You Enter at index ["<<i<<"] "<<array[i]<<" number"<<endl;
	}
}
void inputprocessing(int array[],int size){
	int d= size/2;
	int even=0,odd=0;
	for(int i=0;i<size;i++){
		int number = array[i]%2;
		if(number==0){
			even++;
		}else if(number==1){
			odd++;
		}
	}
	cout<<"The Even numbers are "<<even<<endl;
	cout<<"The Odd numbers are "<<odd<<endl;
}
int main()
{
	int n;
	cout<<"please enter the size of array: ";
	cin>>n;
	int arrOne[n];
	for(int i=0;i<n;i++){
		cout<<"You enter at index "<<i<<" ";
		cin>>arrOne[i];
	}
	cout<<endl;
	input(arrOne,n);
	cout<<endl;
	inputprocessing(arrOne,n);
}
