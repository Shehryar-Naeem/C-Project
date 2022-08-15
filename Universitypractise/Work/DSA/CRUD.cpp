#include<iostream>
using namespace std;
int SOA=20,ListOfArray;
bool isFull(){
    if(ListOfArray==SOA){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(ListOfArray==0){
        return true;
    }else{
        return false;
    }
}
void insertAtStart(int ar[]){
    if(isFull()){
        cout<<"Your array is full you not put further value"<<endl;
    }
}
int main(){
    int arr[SOA]={1,2,3,4,5,6,8,4,10,11,5,47,8,2,1,78,4,8,7,9};
    for(int i=0;i<SOA;i++){
        if(arr[i]!=0){
            ListOfArray++;
        }
    }
    insertAtStart(arr);
    return 0;
}
