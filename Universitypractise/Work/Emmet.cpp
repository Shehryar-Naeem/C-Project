#include<iostream>
#include<iostream>
using namespace std;

class practise{
	string name;
	int rollNo;
	float perc;
	int totalNum;
	int totalSubject;
	public:
	void setData();
	void getData();
	practise(){
		
	}
	practise(string name,int rollNo,int totalNum,int totalSubject,float perc){
		cout<<"Name is: "<<name<<endl;
		cout<<"Roll No is: "<<rollNo<<endl;
		cout<<"Total Numbers are: "<<totalNum<<endl;
		cout<<"Total Subjects are: "<<totalSubject<<endl;
		cout<<"Your percantage: "<<perc<<endl;
	}
	~practise(){
		cout<<"end"<<endl;
	};
};
void practise::setData(){
	cout<<"Please enter the user name: ";
	cin >>name;
	cout<<"Please enter the roll number:";	
	cin>>rollNo;
	cout<<"Please enter the total number: ";
	cin>>totalNum;
	cout<<"Please enter the subjects number: ";
	cin>>totalSubject;
	perc= (float)totalNum/(totalSubject*100)*100;
}
void practise::getData(){
	cout<<"Name is: "<<name<<endl;
	cout<<"Roll No is: "<<rollNo<<endl;
	cout<<"Total Numbers are: "<<totalNum<<endl;
	cout<<"Total Subjects are: "<<totalSubject<<endl;
	cout<<"Your percantage: "<<perc<<endl;
}

//void practise::setData(){
//
//}
//void practise::getData(){
//	cout<<set;
//}

int main()
{	
	practise show;
	practise show2("shehryar",12,933,11,84.81);
	show.setData();
	show.getData();
	return 0;
}
