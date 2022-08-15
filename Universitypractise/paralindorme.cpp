//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main(void)
//{
//	char name[100];
//	cout<< "please enter the paralindrome"<<endl;
//	cin>>name;
//	int i=0, j=strlen(name)-1;
//	bool x=true;
//	for(i=0;i<j;i++)
//	{
//		if(name[i]!= name[j]){
//			x=false;
//		}
//		j--;
//	}
//	if(x)
//	{
//		cout<<"Yes the string is paralindrome \n";
//	}else{
//		cout<<"No the string is not paralindrome \n";
//	}
//	return 0;
//}
#include <iostream>
#include <cstring>
using namespace std;

bool isAPalindrome(char* palindrome);


int main()
{
    char palindrome[30];
    bool palindrome_check;

    cout << "Please enter an word or phrase.\n";
    cin.getline(palindrome, 30);

    palindrome_check = isAPalindrome(palindrome);

    if (palindrome_check = true)
    {
        cout << "Input is a palindrome\n";
    }
    else
    {
        cout << "Input is not a palindrome\n;";
    }
	system("pause");
	return 0;
}


bool isAPalindrome(char* palindrome)
{
    char* front; 
    char* rear;  

	front = palindrome;// starts at the left side of the c string
	rear = (palindrome + strlen(palindrome)) - 1;//starts at the right side of the c-string. adds the c string plus the incriment value of s
	while (front <= rear)
	{
		if (front = rear)
		{
			front++;
			rear--;
		}
		else
		{
			return false;
		}
	}
    return true;
}
