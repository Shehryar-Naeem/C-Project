// array drifting
#include<iostream>
using namespace std;
int n=20;
int Front=-1,Back=-1;
bool isFull(){
    if(Back==n-1){
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
void enQueue(int ar[]){
    int val;
    if(isFull()){
        cout<<"Queue if full";
    }else if(Front==-1 && Back==-1){
        cout<<"Please Enter the value";
        cin>>val;
        Front=0,Back=0;
        ar[Back]=val;
        for(int i=Front;i<Back+1;i++){
            cout<<"Your Elements in array "<<ar[i]<<endl;
        }

    }else{
        cout<<"Please Enter the value";
        cin>>val;
        Back++;
        ar[Back]=val;
        for(int i=Front;i<Back+1;i++){
            cout<<"Your Elements in array "<<ar[i]<<endl;
        }

    }
}
void deQueue(int ar[]){
    if(isEmpty()){
        cout<<"Your array is Empty";
    }else if(Front == Back){
        cout<<"DeQueElement is "<<ar[Front]<<endl;
        Back=-1,Front=-1;
    }else{
        cout<<"DeQueElement is "<<ar[Front]<<endl;
        Front++;
        for(int i=Front;i<Back+1;i++){
            cout<<"Your Elements in array "<<ar[i]<<endl;
        }
    }
}
int main(){
    int arr[n]= {};
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
