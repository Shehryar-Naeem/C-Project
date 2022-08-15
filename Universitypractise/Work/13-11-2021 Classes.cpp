#include<iostream>
using namespace std;
//class creationArr{
//	int arr[4];
//	public:
//		void getArr();
//		void displayArr();
//		void calculateSumOfArr();
//};
//void creationArr::getArr(){
//	for(int i=0;i<4;i++){
//		cout<<"Please Enter the array in arr at index "<<i<<": ";
//		cin>>arr[i];
//	}
//}
//void creationArr::displayArr(){
//	for(int i=0;i<4;i++){
//		cout<<"Your Enter at index "<<i<<": "<<arr[i]<<" number"<<endl;
//	}
//}
//void creationArr::calculateSumOfArr(){
//	int sum=0;
//	for(int i=0;i<4;i++){
//		sum=sum+arr[i];
//	}
//	cout<<"Your total sum of array is: "<<sum;
//}
class builtInArr{
	public:
		void displayArr(int arr[]){
			for(int i=0;i<5;i++){
				cout<<"At index "<<i<<" value is: "<<arr[i]<<endl;
			}
		}
		void calculateSumOfArr(int arr[]){
			int sum=0;
			for(int i=0;i<5;i++){
				sum =sum+arr[i];
			}
			cout<<"The sum of array is "<<sum;
		}
};
int main(){
//	creationArr obj1;
//	obj1.getArr();
//	obj1.displayArr();
//	obj1.calculateSumOfArr();
 	int arr[]={1,2,3,4,5};
    builtInArr obj1;
    obj1.displayArr(arr);
    obj1.calculateSumOfArr(arr);
	return 0;
}
