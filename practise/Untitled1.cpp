#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
	char name[100],rev[100]={0},*p,*p1;
	int i,j,l=0;
	cout<<"Enter any string ";
	cin>>name;
	p=name;
	p1=rev;
	for(i=0;*(p+i)!=NULL;i++)
	{
		l=l+1;
	}
	for(i=l-1,j=0;i>=0;i--)
	{
		*(p1+j)=*(p+i);
	}
	if(strcmp(p,p1)==0)
	{
		cout<<name<<" is a palindrome string"<<endl;
	}else{
		cout<<name<<" is not a palindrome string"<<endl;
	}
	return 0;
}
