//put value at random index
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
            cout<<"Please Enter the index in between 0 to 4"<<endl;
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
int main()
{
    int option,index=0,i,getter;
    string user;
    do{
        cout<<endl<<"\n\t***************Menu***************";
        cout<<"\n\t*                                *";
        cout<<"\n\t*  1.value at random index       *";
        cout<<"\n\t*  2.value at each index from    *";
        cout<<"\n\t*    user if user want to exit   *";
        cout<<"\n\t*    from array press 0          *";
        cout<<"\n\t*                                *";
        cout<<"\n\t**********************************";
        cout<<"\n choose option: ";
        cin>>option;
            switch(option){
                // case 1 for if user want to enter the value at specific index
                case 1:
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
                    break;


                // case 2, in this case user enter the value in each array index and if user want to exit
                // press 0
                case 2:
                    cout<<"\nPLease Enter the value in Array."<<endl;
                    cout<<"if user want to exit from array press 0.\n"<<endl;
                    for(i=0;i<10;i++){
                        cout<<"Please Enter the value at index "<<i<<": ";
                        cin>>arr[i];
                    // this condition for that if user want to exit from array by compare value if user
                    // press 0 this exit;
                        if(arr[i]==0){
                            cout<<"\nAre you sure you want to exit from array press if(y/n): ";
                            cin>>user;
                            if(user=="y"){
                                break;
                            }else if(user=="n"){
                                for(i;i<10;i++){
                                    cout<<"Please Enter the value at index "<<i<<": ";
                                    cin>>arr[i];
                                }
                            }
                            break;
                        }
                    }
                    cout<<endl;
                    for(int i=0;i<10;i++){
                        cout<<"You Enter at index"<<i<<": "<<arr[i]<<endl;
                    }
                    break;

                default:
                    if(option!=2){
                        cout<<"\nPlease enter the valid number"<<endl;
                    }
            }
    }while(option<3);
    print();
    return 0;
}
