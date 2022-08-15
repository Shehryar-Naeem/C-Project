#include<iostream>
using namespace std;
class Engine{
	private:
	string eng_num;
	
	public:
	void set_eng_num(string num)
	{
	eng_num = num;
	}
	string get_eng_num()
{
	return eng_num;
}

};
class Car{
	private:
	string car_num;
	Engine engine;
	public:
	Car(){
	car_num="111";
	engine.set_eng_num("222");
	}
	void show_Car(){
	cout<<car_num<<endl;
	cout<<engine.get_eng_num()<<endl;
	}
};
main(){
Car c1;
c1.show_Car();
}



