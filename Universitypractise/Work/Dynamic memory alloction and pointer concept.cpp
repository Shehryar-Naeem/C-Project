#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int *ptr;
	int i,n,sum;
	cout<<"please enter the number: ";
	cin>>n;
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL){
		cout<<"memory is not allocate";
		exit(0);
	}else{
		for(i=0;i<n;i++){
			ptr[i]=i+1;
		}
		for(i=0;i<n;i++){
			cout<<ptr[i]<<endl;
		}
		for(i=1;i<n;i++){
			sum+=ptr[i];
		}
		cout<<"Your total sum is: "<<sum;
	}
	free(ptr);
	if (ptr==NULL){
		cout<<"\n memory not allocate";
	}else {
		cout<<"\nallocate";
	}
	return 0;
}




//int main () 
//{ 
//// Pointer initialization to null 
//	int* p = NULL; 
//// Request memory for the variable using new operator 
//	p = new int; 
//	if (p==NULL) 
//cout << "allocation of memory failed\n"; 
//	else
//	{ 
//// Store value at allocated address 
//	*p = 29; 
//cout << "Value of p: " << *p << endl; 
//	} 
//// Request block of memory using new operator 
//	float *r = new float(75.25); 
//
//	cout << "Value of r: " << *r << endl; 
//	// Request block of memory of size n 
//	int n = 5; 
//	int *q = new int[n]; 
//	if (q==NULL) 
//	cout << "allocation of memory failed\n"; 
//	else
//	{ for (int i = 0; i < n; i++) 
//		q[i] = i+1; 
//	cout << "Value store in block of memory: "; 
//		for (int i = 0; i < n; i++) 
//		cout << q[i] << " "; 
//	} 
//	// freed the allocated memory 
//	delete p; 
//	delete r; 
//	// freed the block of allocated memory 
//	delete q; 
//	if (p==NULL) 
//cout << "allocation of memory failed\n"; 
//	return 0;  
//	} 

