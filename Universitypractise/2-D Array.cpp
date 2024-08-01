#include<iostream>
using namespace std;

int main(void)
{
	/*int array[][2]={{1,2,},{3,5}};
	cout<<array[1][1];*/
	int row , col;
	cout<<"Enter the number of rows ";
	cin>>row;
	cout<<"Enter the number of columns ";
	cin>>col;
	int arr[row][col];

	for(int i=0; i < row;i++){
        for(int j=0 ; j<col;j++){
            cout<<"Please Enter the value at "<<i+1<<j+2<<" position ";
            cin>>arr[i][j];
        }
	}



for(int i=0; i < row;i++){
        for(int j=0 ; j<col;j++){

            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
