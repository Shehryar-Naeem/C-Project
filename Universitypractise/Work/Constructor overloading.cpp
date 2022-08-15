#include<iostream>
using namespace std;
class one{
	protected:
		int a;
		int b;
	public:
		one(){
			cout"one ka call"<<enld
		}
		void enterNumber(){
			cout<<"Enter the value of a: ";
			cin>>a;
			cout<<"Enter the value of b: ";
			cin>>b;
		}
		~one(){
			cout"one ka call desructor"<<enld
		}
};
class two : public one{
	private: 
	int total;
	public:
		void sum(){
			total=a+b;
			cout<<"Sum is: "<<total;
		}
};
int main(){
	two s;
	s.enterNumber();
	s.sum();
}


