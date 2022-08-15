#include<iostream>
using namespace std;

// ************structure data type *******************
typedef struct employee
{
	int eId;
	char favChar;
	long double salary;
}ep;

// *********** another way to write struct *************
//struct employee
//{
//	int eId;
//	char favChar;
//	long double salary;
//};
// *************** union data type *********************
union money
{
	int eId;
	char favChar;
	long double salary;
};
int main (void)
{
//	struct employee shehryar
	ep shehryar;
	shehryar.eId=2000745;
	shehryar.favChar='c';
	shehryar.salary=120000000;
	cout<<shehryar.eId<<endl;
	cout<<shehryar.favChar<<endl;
	cout<<shehryar.salary<<endl;
	// ************** union money kashan ********************
	union money kashan;
	kashan.salary=42577;
	kashan.favChar='d';
	cout<<kashan.salary<<endl;
//	cout<<kashan.salary;
	return 0;
}
