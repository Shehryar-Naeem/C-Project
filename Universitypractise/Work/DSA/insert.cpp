#include<iostream>
using namespace std;
int n,N;
bool isEmpty(){
    if(N==0){
        return true;
    }else{
        return false;
    }
}
void insertEnd(int arr[]){
    int value;
    if(!isEmpty()){
        cout<<"Memory is full";
    }else{
        cout<<"Enter the value= ";
        cin>>value;
        arr[]

    }
}
int main(){
    cout<<"array size enter";
    cin>>n;
    int arr[n]={1,23,4,5,6,7,8,94};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            N++;
        }
    }
    cout<<N;
    insertEnd(arr)
    return 0;
}
