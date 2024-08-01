#include<iostream>
#include<iomanip>
using namespace std;

int glo=78;

int main()
{
	// *************************Build in Data type ***********************
	/*int glo=26;
	cout<<glo<<endl;
	cout<<::glo;  this is a scope resolution operotar*/

	//float d=34.4f;
	//long double e=34.4l;
	// *************************float, double, long double literals ***********************
    //cout<<"The value d is "<<d<<endl<<"The value of e is "<<e;
    //cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    //cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    //cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    //cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    //cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // ************************ Reference variable ***********************
    //float x=455;
    /*float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    // ************************ Type casting **********************

    int a=45;
    float z=45.63;
    cout<< "The value of a is "<<(float)a<<endl;
    cout<< "The value of z is "<<(int)z;*/


    // *******************************Manipulator in C++ ******************
    int a=3 ,b= 45, c=5444;
 cout<<"The value of a without setw is "<<a<<endl;
   cout<<"The value of b without setw is "<<b<<endl;
    cout<<"The value of c without setw is "<<c<<endl;
 cout<<"The value of a is "<<setw(4)<<a<<endl;
	  cout<<"The value of b is "<<setw(4)<<b<<endl;
  cout<<"The value of c is "<<setw(4)<<c<<endl;

    // ************************** Basic Control structure ***************************************

    // **************************Sequence structure ********************************************
    // if else
    // if else if
    // switch statemet
    //int age= 0;
    //cout<<"Please Tell me your age "<< endl;
    //cin>> age;
    //if (age<20){
    //	cout<< "You can cannot come to the party "<<endl;
	//}else if (age ==20){
	//	cout<< "You are a kid and you will get a kid pass to the party"<<endl;
	//}else{
	//	cout<<"You can come to the party"<< endl;
	//}

	// ************************************ switch case statement ********************************
	//switch(age)
	//{
	//  case
	//}
	// ************************************* loop ****************************************
	/*
	  for loop
	  while loop
	  do-while loop
	*/
	//for(int i=0;i<=40;i++){
	//	cout<<i<<endl;
	//};

	// while loop
	//int i=0;
	//while(i<=40){
	//	cout<<i<<endl;
	//	i++;
	//}
//	int i=0;
//	do{
//		cout<<i<<endl;
//		i++;
//	}while(i<=30);
//
//    int i=1;
//    int tableof;
//    cin>>tableof;
//    do{
//    	cout<<tableof<<" * "<<i<<" = "<<tableof*i<<endl;
//    	i++;
//	}while(i<=10);

	// ************************************** Boilar plate ************************************
//	for(int i=0;i<40;i++){
//		if(i==15){
//			break;
//		};
//		cout<<i<<endl;
//	}
//	for(int i=0;i<40;i++){
//		if(i==15){
//			continue;
//		};
//		cout<<i<<endl;
//	}

	// ******************************* Pointer ****************************************************
    //int a=45;
    //int* b=&a;
    //&------> (Address of ) operator;
    //cout<<&a<<endl;
    //cout<<b<<endl;

    //*------> (Dereference) operator
    //cout<<*b<<endl;


    //Pointer to pointer
    //int** c=&b;
    //cout<<&b<<endl;
    //cout<<c<<endl;
    //cout<<**c<<endl;

	// ******************************* Array *******************************************

































	return 0;
}

