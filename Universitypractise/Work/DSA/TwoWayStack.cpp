#include<iostream>
using namespace std;
int n=10;
int Front=-1,Back=n-1;
bool isFull(){
    if(Front==Back){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(Front==-1){
        return true;
    }else{
        return false;
    }
}
bool isEmpty2(){
    if(Back==n-1){
        return true;
    }else{
        return false;
    }
}
void pushStack1(int ar[]){
    if(isFull()){
        cout<<"Your Stack is full not perform push the value"<<endl;
    }else{
        int val=0;
        cout<<"Please Enter the value: ";
        cin>>val;
        Front++;
        ar[Front]=val;
        for(int i=0;i<n;i++){
            cout<<ar[i]<<",";
        }
    }
}
void popStack1(int ar[]){
    if(isEmpty()){
        cout<<"Your array is empty not pop the value"<<endl;
    }else{
        cout<<"your pop element is: "<<ar[Front]<<endl;
        ar[Front]=0;
        Front--;
        for(int i=0;i<n;i++){
            cout<<ar[i]<<",";
        }
    }
}
void pushStack2(int ar[]){
    if(isFull()){
        cout<<"Your Stack is full not perform push the value"<<endl;
    }else{
        int i=Front;
        int val=0;
        cout<<"Please Enter the value: ";
        cin>>val;
        ar[Back]=val;
        Back--;
         for(int i=0;i<n;i++){
            cout<<ar[i]<<",";
        }
    }
}
void popStack2(int ar[]){
    if(isEmpty2()){
          cout<<"Your array is empty not pop the value"<<endl;
    }else{
        cout<<"your pop element is: "<<ar[Back]<<endl;
        ar[Back]=0;
        Back++;
        for(int i=0;i<n;i++){
            cout<<ar[i]<<",";
        }
    }
}

int main(){
    int arr[n]={};
    int i=0,getVal;
    do{
        cout<<endl<<"\n\t*******************Menu**************************";
            cout<<"\n\t*                                                *";
            cout<<"\n\t*    1.Enter 0 if Exit                           *";
            cout<<"\n\t*    2.Enter 1 if perform stack1 push operation  *";
            cout<<"\n\t*    3.Enter 2 if perform stack2 push operation  *";
            cout<<"\n\t*    3.Enter 2 if perform stack1 pop operation   *";
            cout<<"\n\t*    3.Enter 2 if perform stack2 pop operation   *";
            cout<<"\n\t*                                                *";
            cout<<"\n\t**************************************************";
            cout<<endl;
            cout<<"Please select the option which your perform: ";
            cin>>getVal;
            switch(getVal){
            case 0:
                exit(0);
                break;
            case 1:
                pushStack1(arr);
                break;
            case 2:
                pushStack2(arr);
                break;
            case 3:
                popStack1(arr);
                break;
            case 4:
                popStack2(arr);
                break;
            default:
                cout<<"Please Enter the valid number";
                break;
            }
    }while(i<1);
    return 0;
}
