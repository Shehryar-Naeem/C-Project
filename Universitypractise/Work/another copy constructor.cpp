#include<iostream>
using namespace std;
class studentInfo{
	private:
		string studentName;
		int studentId;
		int studentMarks;
	public:	
	float percentage;
	void SetStudentInfo(){
		cout<<"Please enter the Student Name: ";
		cin>>studentName;
		cout<<"Please enter the Student Id: ";
		cin>>studentId;
		cout<<"Please enter the Student Marks: ";
		cin>>studentMarks;
	}
	float calculatePercentage(){
		percentage=float(studentMarks)/1100*100;
		return percentage;
	}
	void getStudentInfo(){
		int i=1;
		cout<<"**********************************************"<<endl;
		cout<<"*"<<"\t"<<i<<". Student Name is: "<<studentName<<"\t"<<endl;
		i++;
		cout<<"*"<<"\t"<<i<<". Student Id is: "<<studentId<<"\t"<<endl;
		i++;
		cout<<"*"<<"\t"<<i<<". Student Marks is: "<<studentMarks<<"\t"<<endl;
		i++;
		cout<<"*"<<"\t"<<i<<". Student Percentage is: "<<percentage<<"%"<<"\t"<<endl;
		cout<<"**********************************************"<<endl;	
	}
	void finalOutput(){
		cout<<"Student With highiest marks and percantage"<<endl;
		int i=1;
		cout<<"**********************************************"<<endl;
		cout<<"*"<<"\t"<<i<<". Student Name is: "<<studentName<<"\t"<<endl;
		i++;
		cout<<"*"<<"\t"<<i<<". Student Id is: "<<studentId<<"\t"<<endl;
		i++;
		cout<<"*"<<"\t"<<i<<". Student Marks is: "<<studentMarks<<"\t"<<endl;
		i++;
		cout<<"*"<<"\t"<<i<<". Student Percentage is: "<<percentage<<"%"<<"\t"<<endl;
		cout<<"**********************************************"<<endl;
	}
};

int main(){
	studentInfo info[3];
	for(int i=0;i<3;i++){
		cout<<"Please enter the "<<i+1<<" record of student"<<endl;
		info[i].SetStudentInfo();
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		info[i].calculatePercentage();
	}
	for(int i=0;i<3;i++){
		cout<<"Your "<<i+1<<" record"<<endl;
		info[i].getStudentInfo();
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		if(info[0].percentage<info[i].percentage){
			info[0]=info[i];
		}
	}
	info[0].finalOutput();
	return 0;
}
