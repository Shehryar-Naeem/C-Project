#include<iostream>
using namespace std;

//class Aclass{
//	protected:
//		int a;
//		int b;
//	public:
//		Aclass(int x,int y){
//			a=x;
//			b=y;
//			cout<<"constructor is called: Aclass ??"<<endl;
//		}
//		~Aclass(){
//			cout<<"destructor called Aclass: ??"<<endl;
//		}
//		void getOutput(){
//			cout<<"The value of a is: "<<a<<". The value of b is: "<<b<<endl;
//		}
//};
//class Bclass:virtual public Aclass{
//	protected:
//		int c;
//		int d;
//	public:
//		Bclass(int x,int y):Aclass(10,20){
//			c=x;
//			d=y;
//			cout<<"constructor called Bclass: ??"<<endl;
//		}
//		~Bclass(){
//			cout<<"destructor called Bclass: ??"<<endl;
//		}
//		void getOutputB(){
//			cout<<"The value of c is: "<<c<<". The value of d is: "<<d<<endl;
//		}
//};
//class Cclass:public Bclass{
//	private:
//		int e;
//		int f;
//	public:
//		Cclass(int x,int y):Aclass(10,40),Bclass(30,40){
//			e=x;
//			f=y;
//			cout<<"constructor called Cclass called: ??"<<endl;
//		}
//		~Cclass(){
//			cout<<"Destructor called Cclass : ???"<<endl;
//
//		}
//		void getOutputC(){
//			cout<<"The value of e is: "<<e<<". The value of f is: "<<f<<endl;		
//		}
//};
//int main(){
//	Cclass c(10,25);
//	c.getOutput();
//	c.getOutputB();
//	c.getOutputC();
//	return 0;
//}





//class Student { 
//private:
//              int a;
//public: 
//             Student(int x)  
//             { 
//             a=x;
//             cout<<"Student(x) called"<< endl; 
//             } 
//            Student()
//             {
//             cout<<"Student() called"<< endl;
//            }
//}; 
//
//class MS_Student : virtual public Student { 
//public: 
//	MS_Student(int x): Student(x)
//                {
//                cout<<"MS student called"<< endl; } 
//}; 
//class BS_Student : virtual public Student { 
//public: 
//             BS_Student(int x): Student(x) 
//               {
//              cout<<"BS student called"<< endl; } 
//               }; 
//
//class TA : public MS_Student, public BS_Student { 
//public: 
//             TA(int x):BS_Student(x), MS_Student(x),Student(x)
//               {
//	cout<<"TA called"<< endl; 
//	} 
//}; 
//
//int main() { 
//	TA ta1(30); 	
//} 

class A 
{ 
int x; 
public: 
void setX(int i) {x = i;} 
void print() { cout << x; } 
};

class B:virtual public A 
{ 
public: 
B() { setX(10); } 
}; 
class C:virtual public A 
{ 
public: 
C() { setX(20); } 
}; 

class D: public B, public C { 
}; 

int main() 
{ 
	D d; 
	d.print(); //error
	return 0; 
} 




//#include<iostream> 
//using namespace std; 
//class Student { 
//public: 
//Student(int x) { cout << "Student(int ) called" << endl; } 
//Student(){ cout << "Student() called" << endl; } 
//}; 
//
//class MS_Student :virtual public Student { 
//public: 
//	MS_Student(int x):Student(x) { 
//	cout<<"MS-Student called"<< endl; 
//	} 
//}; 
//
//class BS_Student : virtual public Student { 
//
//public: 
//	BS_Student(int x):Student(x) { 
//	cout<<"BS_Student called"<< endl; 
//	} 
//}; 
//class TA : public MS_Student, public BS_Student { 
//public: 
//	TA(int x):BS_Student(x), MS_Student(x), Student(x) { 
//		cout<<"TA(int ) called"<< endl; 
//	} 
//}; 
//
//int main() { 
//	TA ta1(30); 
//} 



