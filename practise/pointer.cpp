#include<iostream>
using namespace std;

int main(void)
{
	// ****************** just me practise ******************** 
//	int a=45;
//	int* pointer2=&a;
//	cout<<pointer2<<endl;
//	cout<<*pointer2<<endl;
//	int **pointer3=&pointer2;
//	cout<<pointer3<<endl;
//	cout<<**pointer3<<endl;
	
//	int n=78;
//	int *b;
//	b=&n;
//	cout<<b<<endl;
//	cout<<&n<<endl;
//	cout<<*b;
//    int a=45;
//    int* b=&a;
//    //&------> (Address of ) operator;
//    cout<<&a<<endl;
//    cout<<b<<endl;
//    
////    *------> (Dereference) operator
//    cout<<*b<<endl;
//    
//    
////    	Pointer to pointer 
//    int** c=&b;
//    cout<<&b<<endl;
//    cout<<c<<endl;
//    cout<<**c<<endl;

	// ******************** University practise ********************
	// ******************** program one ****************************
//	int n;
//	int* pointer=&n;
//	cout<<"Enter an integer number :";
//	cin>>n;
//	cout<<"value of n:"<<n<<endl;
//	cout<<"address in pointer:"<<pointer<<endl;
//	cout<<"address of pointer:"<<&pointer<<endl;

	// ******************** program two ****************************	
//	int marks[5];
//	int i,*pointer4;
//	cout<<"Enter please five number:"<<endl;
//	for(i=0;i<5;i++){
//		cin>>marks[i];	
//	}
//	pointer4=marks;
//	cout<<"you entered"<<endl;
//	for(i=0;i<5;i++){
//		cout<<pointer4<<endl;
//		cout<<&marks<<endl;
//	}
//	pointer4=marks;
//		for(i=0;i<5;i++){
//		cout<<*pointer4++<<endl;
//	}
//	
	// ******************** program three **************************
	
	char name[10];
	cout<<"Enter name"<<endl;
	cin>>name;
	int i=0;
	while(name[i]!='\0'){
		cout<<name[i]<<endl
		;
		i++;
	}	
	cout<<i;
	return 0;
}
