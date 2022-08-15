// Circular Queue
#include<iostream>
using namespace std;
int n=20,Front=-1,Back=-1;
bool isFull(){
    if(((Back+1)%n )== Front ){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(Front==-1 && Back==-1){
        return true;
    }else{
        return false;
    }
}
void enQueue(int arr[]){
    int val;
    if(isFull()){
        cout<<"Array is full for enQueue elements"<<endl;
    }else if(Front==-1 && Back==-1){

        int i= Front;
        cout<<"Please Enter the value: ";
        cin>>val;
        Front=0,Back=0;
        arr[Back]=val;
        while(i!=Back){
            i= ((i+1)%n);
            cout<<"Your elements in array: "<<arr[i]<<endl;

        }
    }else{
        int i= Front;
        cout<<"Please Enter the value: ";
        cin>>val;
        Back= ((Back+1)%n);
        arr[Back]=val;
            cout<<"Your elements in array: "<<arr[i]<<endl;
        while(i!=Back){
            i= ((i+1)%n);
            cout<<"Your elements in array: "<<arr[i]<<endl;

        }
    }
}
void deQueue(int arr[]){
     int i= Front;
    if(isEmpty()){
        cout<<"Your Array is empty for DeQueue"<<endl;
    }else if(Front == Back){
        cout<<"Your DeQueue Element is "<<arr[Front]<<endl;
        Back=-1,Front=-1;
    }else{
        cout<<"Your DeQueue Element is "<<arr[Front]<<endl;
        Front = ((Front+1)%n);
        while(i!=Back){
            i= ((i+1)%n);
            cout<<"Your elements in array: "<<arr[i]<<endl;
        }
    }
}
int main(){
    int arr[n]={};
    int i=0,getval;
    do{
        cout<<endl<<"\n\t*******************Menu**************************";
            cout<<"\n\t*                                                *";
            cout<<"\n\t*    1.Enter 0 if Exit                           *";
            cout<<"\n\t*    2.Enter 1 if perform top at head EnQueue    *";
            cout<<"\n\t*    3.Enter 2 if perform top at tail DEqueue    *";
            cout<<"\n\t*                                                *";
            cout<<"\n\t***************************************************";
            cout<<endl;
            cout<<"Please select the option which your perform: ";
            cin>>getval;
            switch(getval){
            case 0:
                exit(0);
                break;
            case 1:
                enQueue(arr);
            break ;

            case 2:
                 deQueue(arr);
                 break;
            default:
                cout<<"please Enter the valid number"<<endl;
    }
    }while(i<1);

    return 0;
}
