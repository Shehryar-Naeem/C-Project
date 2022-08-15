/*Write a C++ program having three classes named: Vehicle, Four_Wheeler, Two_Wheeler where Vehicle is parent class of the latter two classes.
The Vehicle class has two data members named mileage and manufacturer. It also has a pure virtual function named 
first_maintenance() that displays appropriate message (in it's overriden versions in derived classes)
if the maintenance of vehicle is due or not according (maintenance is due if the mileage of vehicle reaches 5000 km or above for four wheeler
and 2000 km or above for two wheeler). Vehicle class also has a display function that displays the mileage and manufacturer of the vehicle.
Create one Four_Wheeler object, named car, and one Two_Wheeler object, named bike. Display the mileage and manufacturer of both vehicles 
(car and bike) polymorphically. Also display appropriate messages in case the vehicles need maintenance or not.*/

#include<iostream>
using namespace std;


class vehicle{
	protected:
		long mileage;
		string manufacturer;
	public:
		void settor(){
			cout<<"Enter the mileage: ";
			cin>>mileage;
		}
		virtual void firstMaintaince()=0;
		virtual void display()=0;
};

class fourWheeler: public vehicle{
	public:
		void firstMaintaince(){
			if(mileage>=5000){
				manufacturer="Car made my manufacturer is well";
			}else{
				manufacturer="Car made my manufacturer is not well";
			}
		}
		void display(){
			cout<<"Your mileage: "<<mileage<<endl;
			cout<<manufacturer;
		}
};
class twoWheeler:public vehicle{
	public:
		void firstMaintaince(){
			if(mileage>=2000){
				manufacturer="bike made my manufacturer is well";
			}else{
				manufacturer="bike made my manufacturer is not well";
			}
		}
		void display(){
			cout<<"\n"<<"Your mileage: "<<mileage<<endl;
			cout<<manufacturer;
		}
};
int main(){
	vehicle *v;
	fourWheeler car;
	twoWheeler bike;
	v=&car;
	v->settor();
	v->firstMaintaince();
	v->display();
	v=&bike;
	cout<<endl<<endl;
	cout<<"Again Enter the mileage"<<endl;
	v->settor();
	v->firstMaintaince();
	v->display();	
	return 0;	
}
