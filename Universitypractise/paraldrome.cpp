#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
	char strl[25];
	char *strPt;
	int i,len,flag=0;
	cout<<"Enter any string: ";
	cin>>strl;
	strPt=strl;
	len=strlen(strl);
	for(i=0;i<len;i++)
	{
		if(strl[i]!=strl[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout<<"String is not paralindorme";
	}else{
		cout<<"String is paralindrome";
	}
	return 0;
}
