#include<iostream>
using namespace std;

class StudentInfo{
	private:
		string studentName;
		int studentId;
	public:
		
		int studentMarks;
		void setStudentInfo(){
			cout<<"Please Enter your Name: ";
			cin>>studentName;
			cout<<"Please Enter your ID: ";
			cin>>studentId;
			cout<<"Please Enter your Marks: ";
			cin>>studentMarks;
		}
		void getStudentInfo(){
			cout<<"Student Name is :"<<studentName<<endl;
			cout<<"Student Id: "<<studentId<<endl;
			cout<<"Your Marks is: "<<studentMarks;
		}
		void calculate(){
			cout<<endl;
			cout<<"student Name is: "<<studentName<<endl;
			cout<<"Studnet ID is: "<<studentId<<endl;
			cout<<"Student Heighiest marks "<<studentMarks<<endl;	
		}
		void calculate2(){
			cout<<endl;
			cout<<"student Name is: "<<studentName<<endl;
			cout<<"Studnet ID is: "<<studentId<<endl;
			cout<<"Student Heighiest marks "<<studentMarks<<endl;
		}
};

int main()
{		
		StudentInfo students[10];
		for(int i=0;i<10;i++){
			cout<<"Please enter the "<<i+1<<" student record" <<endl;
			students[i].setStudentInfo();
			cout<<endl;
		}    
		cout<<endl;
		cout<<endl;
		for(int i=0;i<10;i++){
			cout<<"\n"<<"student "<<i+1<<" record"<<endl;
			students[i].getStudentInfo();
			cout<<endl;
		
		}
		for(int i=0;i<10;i++)
		{
			if(students[0].studentMarks<students[i].studentMarks)
			{
				students[0]=students[i];
			}
			
		}
		for(int i=0;i<10;i++)
		{
			if(students[0].studentMarks<=students[i].studentMarks)
			{
				students[0]=students[i];
			}
			
		}
		
		students[0].calculate();
		students[0].calculate2();
		
	return 0;
}
