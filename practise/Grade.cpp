#include<iostream>
using namespace std;

int main()
{
	int Grade;
	cout<<"Please enter your Grade:"<<endl;
	cin>>Grade;
	switch(Grade)
	{
		case 1:cout<<"Your obtain Excellent Marks"<<Grade<<endl;
		break;
		case 2:cout<<"Your obtain Very Good Marks"<<Grade<<endl;
		break;
		case 3:cout<<"Your obtain Good Marks"<<Grade<<endl;
		break;
		case 4:cout<<"Your obtain Fair Marks"<<Grade<<endl;
		break;
		case 5:cout<<"Your obtain limited  Marks"<<Grade<<endl;
		break;
		case 6:cout<<"Your obtain Poor Marks"<<Grade<<endl;
		break;
		default:
			cout<<"Please enter valid Grade"<<endl;
	}	
	return 0;
}
