#include <iostream>
using namespace std;
int arr[5]={0};
int randStore(){
        int index;
        string user;
        cout << "Enter the index : ";
        cin >> index;

        //This condition check index are in bound or not
        if(index<5)
        {
            cout << "\nAre you sure you enter the value index: "<<index<<". if (Y/N)";
            cin>>user;
            if(user=="y"){
                true;
            }else if(user=="n"){
                cout<<"Again Enter index: ";
                cin>>index;
            }
        }else{
            cout<<"Please Enter the index in between 0 to 9"<<endl;
            cout<<"Again Enter index: ";
            cin>>index;
        }



        if(arr[index]!=0)
        {
            cout << "Value already exit at index "<<index <<". Try another index: ";
            cin >> index;
        }
            cout << "Enter Value at "<<index<<": ";
            cin >> arr[index];
}
void print(){
    for(int i=0;i<5;i++){
        cout<<"You Enter the value at index "<<i<<arr[i]<<endl;
    }
}
int main(){
int getter,index=0;
    do{
        cout<<endl<<"\n\t***************Menu***************";
        cout<<"\n\t*                                *";
        cout<<"\n\t*  1.Enter 1 if Enter value      *";
        cout<<"\n\t*  2.Enter 0 if Exit             *";
        cout<<"\n\t*                                *";
        cout<<"\n\t**********************************";
        cout<<endl;
        cout<<"Select: ";
        cin >>getter;
        switch(getter){
            case 1:
                randStore();
                index++;
            break;
            case 0:
                exit(0);
            break;
            default:
            cout<<"\nPlease enter the valid index";
        }
    }while(index<5);
    cout<<endl;
    print();
    return 0;
}


