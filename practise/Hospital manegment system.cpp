                              // Hospital Mangement system
                              // Header file
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

                              //function Declaration
void menu();
void pascode();
void cpascode();

using namespace std;

                              // Ckass one

class oen
{
	public;
	virtual void get()=0;
	virtual void show()=0;
} 

                               //class information

class info:public one
{
	public;
	char name[50], time[50];
	int num, age;
	void get()
	{
		system("cls");
		cin.sync();
		cout<<"\n Enter the patient name =";
		cin.getline(name, 50);
		cout<<"\nEnter Age =";
		cin>>age;
		cout<<"\nEnter Appoinment NO =";
		cin>>num;
	}
	void show()
	{
		cout<<"\nName =" << name;
		cout<<"\nAge =" <<age;
		cout <<"\nNO =" << num;
		cout <<"\nTime " << time;
	}
};

                                
								//Class Rana
class rana:public info
{
	public;
	info al;
	void get()
	{
		system("cls")
		ofstream out("Rana.txt",ios:: app | ios:: binary);
		al.get();
		out.write((char*)&a1,sizeof(info));
		out.close();
		cout<<"Your Entry Has been saved";
		getch();
		menu();
	}
	void show()
	{
		
	}
}




