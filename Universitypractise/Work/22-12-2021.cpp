#include<iostream>
using namespace std;
class constructorClass{
	int a;
	int b;
	int total;
	public:
		
		constructorClass(){
			a=5;
			b=8;
			cout<<"value of a is: "<<a<<endl;
			cout<<"value of b is: "<<b<<endl;
		}
		void processing(){
			total=a+b;
			cout<<"Total is: "<<total<<endl;
		}
		~constructorClass(){
			cout<<"destructor call";
		}
};
int main()
{
	constructorClass constructor;
	constructor.processing();	
	return 0;
}
