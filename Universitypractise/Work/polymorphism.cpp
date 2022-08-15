//#include<iostream>
//using namespace std;
//class shape{
//	protected:
//		float area;
//	public:
//		shape(): area(0){}
//		virtual void get(){}
//		virtual void calculate(){}
//		virtual void display(){}
//};
//class Triangle: public shape{
//	private:
//		int base;
//		int heigth;
//	public:
//		Triangle(int b,int h):base(b),heigth(h){}
//		void get(){
//			cout<<"Please enter the base = ";
//			cin>>base;
//			cout<<"Please enter the height = ";
//			cin>>heigth;
//		}
//		void calculate(){
//			area= base*heigth/2;
//		}
//		void display(){
//			cout<<"Your area of triangle is= "<<area<<endl<<endl;
//		}
//		
//};
//class Rectangle: public shape{
//	private:
//		int length;
//		int width;
//	public:
//		Rectangle(int l,int w):length(l),width(w){
//		}
//		void get(){
//			cout<<"Please enter the length = ";
//			cin>>length;
//			cout<<"Please enter the width = ";
//			cin>>width;
//		}
//		void calculate(){
//			area= length*width;
//		}
//		void display(){
//			cout<<"Your Area of rectangle is= "<<area<<endl<<endl;
//		}
//};
//class Circle:public shape{
//	private:
//		int radius;
//		float pi;
//	public:
//		Circle(int r,float p):radius(r),pi(p){}
//		void get(){
//			cout<<"Please enter the radius = ";
//			cin>>radius;
//		}
//		void calculate(){
//			area=pi* (radius*radius);
//		}
//		void display(){
//			cout<<"Your Area of Circle= "<<area<<endl<<endl;
//		}
//};
//
//int main(){
//	shape *p;
//	Triangle T1(0,0); 
//    Rectangle R1(0,0); 
//    Circle C1(0,3.14);
//    p=&T1;
//    p->get();
//    p->calculate();
//    p->display();
//    p=&R1; 
//    p->get();
//    p->calculate(); 
//    p->display();
//    p=&C1; 
//    p->get();
//    p->calculate(); 
//    p->display();
//	return 0;
//}


#include <iostream> 
using namespace std; 

class base 
{ 
public: 
	void print () 
	{ cout<< "print base class" <<endl; } 

}; 

class derived:public base 
{ 
public: 
	virtual	void print () 
	{ cout<< "print derived class" <<endl; } 

	void show () 
	{ cout<< "show derived class" <<endl; } 
}; 

int main() 
{ 
	base *bptr;
	base b1;
	derived d; 
	bptr = &b1;
	b1.print(); 
	d.show(); 

	return 0; 
}
