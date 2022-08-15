////Create a file in C drive for writing your name, Id, and study program. Read the file 
////and display the data written in the file on screen.
#include<iostream> 
#include<fstream> 
using namespace std; 

int main() 
{ 
	char name[200];
	string rollNO;
	char program[100];
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your rollNo: ";
	cin>>rollNO;
	cout<<"Enter your program: ";
	cin>>program;
	char arr[100];
	ofstream createFile;
	createFile.open("D:\\c++\\Universitypractise\\Work\\Filehandling\\text.doc");	
	createFile<<name<<endl;
	createFile<<rollNO<<endl;
	createFile<<program<<endl;
	
	createFile.close();
	cout<<endl;
	ifstream ReadFile;
	ReadFile.open("D:\\c++\\Universitypractise\\Work\\Filehandling\\text.doc");
	while(!ReadFile.eof())
	{
		ReadFile.getline(arr,100);
		cout<<arr<<endl;
	}
	ReadFile.close();
	int x=-1;
	cout<<"Before try"<<endl;


		try{
			cout<<"inside try"<<endl;
			if(x>0){
				throw x;
				cout<<"try is false"<<endl;
			}		
		}catch(int x){
			cout<<x<<" x is called"<<endl;
		}
		cout<<"after catch"<<endl;
		return 0;
} 
 




int main() 
{ 
	try { 
	throw "A"; 
	} 
	catch (char excp) { 
		cout << "Caught " << excp; 
	} 
	catch (...) { 
		cout << "Default Exception\n"; 
	} 
	return 0; 
}




//int main()
//{
//	char data[100];
//	ofstream abc;
//	abc.open("E:\\Data.txt");

//	abc<<"ID: bsf2000647"<<endl;
//	abc<<"Program: BS IT"<<endl;
//	cout<<"Data Written !"<<endl;
//	abc.close();
//	ifstream xyz;
//	xyz.open("Data.txt");
//	while(!xyz.eof())
//	{
//		xyz.getline(data,100);
//		cout<<data<<endl;
//	}
//	xyz.close();
//	return 0;
//}
