//// how to pass an array to function
//#include<iostream>
//using namespace std;
//
//int ave(int *newArr,int n){
//    for(int i=0;i<n;i++){
//        cout<<"You Enter the value at index "<<i<<": "<<*(newArr+i)<<endl;
//    }
//}
//int main()
//{
//    int n=0;
//    cout<<"Please Enter the size of array: ";
//    cin>>n;
//    int arr[n]={0};
//    for(int i=0;i<n;i++){
//        cout<<"Please the value at index "<<i<<": ";
//        cin>>arr[i];
//    }
//    cout<<endl;
//    ave(arr,n);
//
//}
//
//
////int main()
////{
////
////    int arr[5]={1,2,3,4};
////    for(int i=0;i<=4;i++){
////        cout<<"Please the value at index "<<i<<": "<<arr[i]<<endl;
////
////    }
////}
//
//
//int main()
//{
//
//    int n=10;
//    int arr[n]={0};
//    int index;
//
//    cout<<"Please enter the index: ";
//    cin>>index;
//
//    if(index<n){
//        cout<<"You Enter the correct index number"<<endl;
//        cout<<"Please Enter the value at index "<<index<<": ";
//        cin>>arr[index];
//    for(int i=0;i<n;i++){
////        if(arr[i]<NULL){
//            cout<<"Your value at index: "<<i<<": "<<arr[i]<<endl;
////        }
//    }
//    }else{
//        cout<<"You Not Enter the correct"<<endl;
//    }

//    int *ar= new int{5};
//    ar[3]=5;
//        if(ar[3]==nullptr)
//    {
//
//        cout<<"eror";
//    }else{
//        cout<<"exit";
//    }
//    return 0;
////}

//#include <iostream>
//using namespace std;
//
//int main(){
//    int arr[] = { 6, 3, 5, 2, 8 ,1};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    cout<<n;
//    int elem = 2;
//
//    int i = 0;
//    while (i < n)
//    {
//        if (arr[i] == elem) {
//            break;
//        }
//        i++;
//    }
//
//    if (i < n)
//    {
//        cout << "Element " << elem << " is present at index " << i
//             << " in the given array";
//    }
//    else {
//        cout << "Element is not present in the given array";
//    }
//
//    return 0;
//}


#include<iostream>
#include<string>
using namespace std;

int n,N;
bool isFull(){
	if(N==n)
	 return true;
	else
	 return false;
}
bool isEmpty(){
	if(N==0)
	 return true;
	else
	 return false;
}
void EnQueue(int m[]){
	if(isFull())
	 cout<<"Queue is already full"<<endl;
	else{
		int val;
	cout<<"Enter the value that you want to Enqueu"<<endl;
	cin>>val;
	int prior;
	do{
		cout<<"Choose a number to store according to priority"<<endl;
		cout<<"1. High priority"<<endl;
		cout<<"2. Mid priority"<<endl;
		cout<<"3. Low priority"<<endl;
		cin>>prior;
		switch(prior){
			case 1:
				{
			  for(int i= N; i>0;i--){

		        m[i]= m[i-1];
			  }
	         m[0]=val;
		     N++;
		     for(int i=0; i<N; i++){

            cout<<m[i]<<endl;
		     }
			 prior=0;
		     break;
	}
	        case 2:
	        	{
//	        	    cout<<N;
	        	int j= N/2;
	        	for(int i=N;i>j; i--){
	        	 m[i]=m[i-1];
	        	}
	        	m[j]=val;
				N++;
				for(int i=0; i<N; i++)
                {

                    cout<<m[i]<<endl;

                }
				prior=0;
				}
				break;
			case 3:
			    m[N]= val;
				N++;
				for(int i=0; i<N; i++){

                cout<<m[i]<<endl;
				}
				prior=0;
				break;
			default:
			 cout<<"You have entered inappropriate number"<<endl;
		}
	}while(prior!=0);
	}
}
void DeQueue(int m[]){
	if (isEmpty())
	 cout<<"Queue is already Empty"<<endl;
	else{
	cout<<"DeQueued value is:  "<<m[0]<<endl;
	  for (int i=0; i<N;i++)
	     m[i]=m[i+1];
	N--;
}
}
void display(int m[]){
	for(int i=0; i<N; i++)
	 cout<<m[i]<<endl;
}
int main(){
	N=0;
	n=10;
	int arr[n]={2,3,4,5,3,4};
	for (int i=0;i<n; i++){
		if(arr[i]!=0){
		 N++;
		 continue;
	}
	    break;

	}
	int point;
	do{
		cout<<"Choose following functions which you want to execute. Press 0 if you want to exit"<<endl;
		cout<<"1. isFull()"<<endl;
		cout<<"2. isEmpty()"<<endl;
		cout<<"3. Enqueue()"<<endl;
		cout<<"4. Dequeue()"<<endl;
		cout<<"5. display()"<<endl;
		cin>>point;
	switch(point)
	{
	case 0:
	 cout<<"Function closed"<<endl;
	 break;
	case 1:
	  cout<<"isFull() is called"<<isFull()<<endl;
	  break;
	case 2:
	  cout<<"isEmpty() is called"<<isEmpty()<<endl;
	  break;
	case 3:
	  cout<<"Enqueue() is called"<<endl;
		EnQueue(arr);
		break;
	case 4:
	  cout<<"Dequeue() is called"<<endl;
	  DeQueue(arr);
	  break;
	case 5:
	  cout<<"display() is called"<<endl;
	   display(arr);
	   break;
	default:
		cout<<"You have entered inappropriate value"<<endl;
}
	}while(point!=0);
	return 0;
}
