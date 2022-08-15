#include<iostream>
#include<string.h>
using namespace std;
int max(int,int);

int main(){
//	int s;
//	char *strPtr;
//	char firstChar=0,lastChar;
//	cout<<"Enter the size of character array: ";
//	cin>>s;
//	char charFirst[s];
//	cout<<"Please Enter the enter the character array:";
//	cin>>charFirst;
//	strPtr=charFirst;
//	int newChar= strlen(charFirst);
//	lastChar = strlen(charFirst)-1;
//	cout<< lastChar;
//	int result;
//	for(;firstChar<=lastChar;firstChar++,lastChar--){
//		 if(charFirst[firstChar]!=charFirst[lastChar]){
//		 	result=0;
//		 	break;
//		 }
//		 result=1;
//		 break;
//	}
//	if(result){
//		cout<<"Given string is Palindrome";
//	}else{
//		cout<<"Given string is not Palindrome";
//	}	
	int a,b;
	cout<<"Please enter the integer type number";
	cin>>a;
	cout<<"Please enter the second integer type number";
	cin>>b;
	max(a,b);
	return 0;
}
int max(int a,int b){
	if(a>b){
		cout<<a;
	}else{
		cout<<b;
	}
}
