#include<iostream>
using namespace std;  

class A 
{ 
public: 
A() { cout << "A's constructor called" << endl; } //2
~A() { cout << "A's destructor called" << endl; } //6
}; 

class B 
{ 
public: 
B() { cout << "B's constructor called" << endl; } //1
~B() { cout << "B's destructor called" << endl; } //5
}; 
class C:public A, public B // Note the order 
{ 
public: 
C() { cout << "C's constructor called" << endl; } //3
~C() { cout << "C's destructor called" << endl; } //4
}; 

int main() 
{ 
	C c; 
	return 0; 
} 


