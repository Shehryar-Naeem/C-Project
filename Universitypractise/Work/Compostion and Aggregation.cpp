/*Write a C++ program that creates a class named Car. It has an object of user defined type called Engine.
The Engine has engine_number as a data member which is set in the constructor of class Engine.
The class Car has an aggregation relationship with another user defined class called Passenger which has passenger_name as its data member.
Create an object of class Car that displays the engine number and a passenger name on screen.*/

#include <iostream> 
#include<string.h>
using namespace std;  

class Engine{
	private:
		int engineNumber;
	public:
		Engine(int num){
			engineNumber=num;
		}
		
};
class Passenger{
	private:
		string passengerName;
	public:
		Passenger(int name){
			passengerName=name;
		}
		
};
class car{
	public:
	Engine engine=Engine(25);
	Passenger *passenger =Passenger("shehryar");
	
};
int main(){
	
}


