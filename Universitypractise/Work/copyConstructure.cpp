  #include<iostream>
#include<String.h>
using namespace std;

class copyConstructor{
	int a;
	int b;
};


// **********************copy Constructor **************************************
//class copyConstructor{
//	int a;
//	int b;
//	public:
//		copyConstructor(int x1,int x2){
//			a=x1;
//			b=x2;
//			cout<<a<<endl;
//			cout<<b<<endl;
//		}
//		copyConstructor(const copyConstructor&con1){
//			cout<<"copy constructor call"<<endl;
//			a=con1.a;
//			b=con1.b;
//			cout<<a<<endl;
//			cout<<b<<endl;
//		}
//		int getA(){
//			return a;
//		}
//		int getB(){
//			return b;
//		}
//		
//};


// **********************Array of object**************************************

//class array{
//	int a;
//	int b;
//	public:
////		default Constructor
//		array(){
//			a=0;
//			b=0;
//		}
////		parametrized Constructor
//		array(int x,int y){
//			a=x;
//			b=y;
//		}
//		void getDisplay(){
//			cout<<"The value of a is: "<<a<<", The value of b is: "<<b;
//		}
//};


//class copyConstructor{
//	int a;
//	int b;
//	int c;
//	int d;
//	public:
//	copyConstructor(int x,int y){
//		a=x;
//		b=y;
////		cout<<"The value of A is: "<<a<<endl;
////		cout<<"The value of B is: "<<b<<endl;
//	}
//	copyConstructor(const copyConstructor&cons1){
//		cout<<"copy Constructor is called"<<endl;
//		c=cons1.a;
//		d=cons1.b;
//		cout<<"The value of c is: "<<c<<endl;
//		cout<<"The value of d is: "<<d<<endl;
//	}
//	int displayA(){
//		return a;
//	}
//	int displayB(){
//		return b;
//	}
//	int displayC(){
//		return c;
//	}
//	int displayD(){
//		return d;
//	}
//};

// **********************************Array of an object****************************************
//	class array{
//		string name;
//		int number;
//		public:
//			void Names(){
//				getline(cin,name);
//			}
//			void getNumber(){
//				cin>>number;
//			}
//		void displayInfo(){
//			cout<<" The user name is: "<<name<<" The user number is: "<<number<<endl;
//		}
//	};
//
//
//int main(){
	// **********************copy Constructor **************************************
	
//	copyConstructor con1(6,8);
//	copyConstructor con2=con1;
//	copyConstructor con3=con1;
//	cout << "\ncon1 = " << con1.getA() << ", con1.y = " << con1.getB();
//	cout << "\ncon2.x = " << con2.getA() << ", con2.y = " << con2.getB();
//	cout << "\ncon3.x = " << con3.getA() << ", con3.y = " << con3.getB();


//	copyConstructor cons1(5,6);
//	cout<<"The value of a is: "<<cons1.displayA()<<" The value of b is: "<<cons1.displayB()<<endl;
//	copyConstructor cons2=cons1;
//	cout<<"The value of c is: "<<cons2.displayC()<<" The value of d is: "<<cons2.displayD ()<<endl;

	// ******************************* Array **********************************
//	arr	cout<<"Student Record NO "<<i+1<<endl;
//		cout<<"Please Enter the Name: ";
//		arr[i].Names();
//		cout<<"Please Enter the Number: ";
//		arr[i].getNumber();
//		cout<<endl;
//	}
//	for(int i=0;i<3;i++){
//		cout<<"Recored No "<<i+1;
//		arr[i].displayInfo();
//	}
//ay arr[3];
//	for(int i=0;i<3;i++){
	
	return 0;
}
