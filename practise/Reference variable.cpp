#include<iostream>	
using namespace std;


int main(void)
{
	//****************** Reference variable**************************
	long double a=54.32;
	long double & b =a;
	cout<<sizeof(b)<<endl;
	//****************** Type forecasting **********************
	float c=54.321;
	cout<<int(c);
	return 0;
}
