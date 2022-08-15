#include<iostream>
using namespace std;
int N,n;
bool isFull(){
    if(N==n){
        return true;
    }else{
        return false;
    }
}
void searchArray(int arr[]){
    int value,counter=0,inc=0;
    if(isFull()){
        cout<<"memory is full";
    }else{
        cout<<"Please Enter the value: ";
            cin>>value;
        for(int i=0;i<N;i++){
            if(value==arr[i]){
                counter=counter+1;
                inc++;
            }
        }
        if(inc==0){
            cout<<"value not found";
        }else{
        cout<<"your Value "<<value<<" times: "<<counter<<endl;
        }
    }

}
void updateArray(int arr[]){
    int value,newValue,inc;
    cout<<"Please Enter the value for which you update: ";
    cin>>value;
    for(int i=0;i<N;i++){
        if(value==arr[i]){
            cout<<"Enter new Value: ";
            cin>>newValue;
            arr[i]=newValue;
            inc++;
        }
    }
    if(inc==0){
        cout<<"value not found";
    }else{
        cout<<"update Array";
        for(int i=0;i<N;i++){
            cout<<arr[i]<<endl;
        }
    }
}
int main(){
    N=0;
    cout<<"Please Enter the size of array";
    cin>>n;
    int arr[n]={1,2,2,2,3,4,5,6,7,8,5,2,3,2,2,2,9,1,4,1};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            N++;
        }
    }
    cout<<N<<endl;;
//    searchArray(arr);
    updateArray(arr);
    return 0;
}
