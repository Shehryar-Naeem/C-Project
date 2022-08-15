#include <iostream>
using namespace std;
int n=10;
int F=-1,B=-1;

bool isFull(){
    if(B==n-1){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(B==-1 && F==-1){
        return true;
    }else{
        return false;
    }
}

void enQueue(int ar[]){
    if(isFull()){
        cout<<"Your array is already full"<<endl;
    }else if(F==-1 && B==-1){
        int val;
        cout<<"please Enter the value: ";
        cin>>val;
        B=0,F=0;
        ar[B]=val;
        cout<<"your element is"<<ar[B];
    }else{
        int val;
        cout<<"please Enter the value: ";
        cin>>val;
        B++;
        ar[B]=val;
        for(int i=F;i<B+1;i++){
            cout<<"your in array: "<<ar[i]<<endl;
        }

    }
}
void deQueue(int ar[]){
    if(isEmpty()){
        cout<<"your array is empty"<<endl;
    }else if(B==F){
        cout<<"Deleted element is :"<<ar[F];
        B=-1,F=-1;
    }
else{
    cout<<"Deleted element is: "<<ar[F]<<endl;
    F++;
     for(int i=F;i<B+1;i++){
            cout<<"your in array: "<<ar[i]<<endl;
    }
}
}

int main(){
    int arr[n]={};
    int d=0;
    do{
        cout<<"Enter 1 for Enqueue"<<endl;
        cout<<"Enter 2 for Dequeue"<<endl;
         cout<<"Enter 0 for exit"<<endl;
        int get;
        cout<<"Enter the value: ";
        cin>>get;
        switch(get){
        case 0:
            exit(0);
            break;
        case 1:
            enQueue(arr);
            break;
        case 2:
            deQueue(arr);
            break;
        default:
            cout<<"not valid number"<<endl;
        }
    }while(d<1);
    return 0;
}
