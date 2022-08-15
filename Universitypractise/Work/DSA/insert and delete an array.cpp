// Array and list perform insertion deletion update and seacrch
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
void insertAtStart(int ar[]){
    if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int index=0,value;
        cout<<"\nPlease Enter the value at "<<index<<": ";
        cin>>value;
        for(int i=N;i>index;i--){
            ar[i]=ar[i-1];
        }
        ar[index]=value;
        N++;
    }

}
void insertAtBtw(int ar[]){
    if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int index,value;
        cout<<"\nPlease Enter the index: ";
        cin>>index;
        cout<<"\nPlease Enter the value: ";
        cin>>value;
        for(int i=N;i>index;i--){
            ar[i]=ar[i-1];
        }
        ar[index]=value;
        N++;
    }

}
void insertAtEnd(int ar[]){
    if(isFull()){
        cout<<"Memory Already full"<<endl;
    }else{
        int value;
        cout<<"\nPlease Enter the value: ";
        cin>>value;
        ar[N]=value;
        N++;
    }

}
void deleteAtStart(int ar[]){
    int index=0;
    for(int i=index;i<=N;i++){
        ar[i]=ar[i+1];
    }
    ar[N]=0;
    N--;

}
void deleteAtBtw(int ar[]){
    int index;
    cout<<"Please Enter the index where you delete the value: ";
    cin>>index;
    for(int i=index;i<=N;i++){
        ar[i]=ar[i+1];
    }
    ar[N]=0;
    N--;
}
void deleteAtEnd(int ar[]){
    ar[N]=0;
    N--;
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
        cout<<"your Value "<<value<<" found: "<<counter<<" times."<<endl;
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
        cout<<"update Array"<<endl;
        for(int i=0;i<N;i++){
            cout<<arr[i]<<endl;
        }
    }
}
 int main(){
     N=0;
     int n=20;;
     if(n>=10){
        int arr[n]={1,2,2,3,4,5,2,6,7,8,2,9,10};
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                N++;
                continue;
            }
            break;
        }
        int get,i=0;
        do{
            cout<<endl<<"\n\t***************Menu****************";
            cout<<"\n\t*                                 *";
            cout<<"\n\t*  1.Enter 0 if Exit              *";
            cout<<"\n\t*  2.Enter 1 if insert value      *";
            cout<<"\n\t*  3.Enter 2 if delete value      *";
            cout<<"\n\t*  4.Enter 3 if search value      *";
            cout<<"\n\t*  5.Enter 4 if update value      *";
            cout<<"\n\t*                                 *";
            cout<<"\n\t***********************************";
            cout<<endl;
            cout<<"Please Select the option: ";
            cin>>get;
            switch(get){
            case 0:
                exit(0);
            break;
            case 1:
                {
                int i=0;
                do{
                cout<<endl<<"\n\t***************Menu*****************";
                cout<<"\n\t*                                  *";
                cout<<"\n\t*  1.Enter 0 if Exit               *";
                cout<<"\n\t*  2.Enter 1 if insert at First    *";
                cout<<"\n\t*  3.Enter 2 if insert at Between  *";
                cout<<"\n\t*  4.Enter 3 if insert at End      *";
                cout<<"\n\t*                                  *";
                cout<<"\n\t************************************";
                cout<<endl;
                int getter;
                cout<<"Please select the value: ";
                cin>>getter;
                    if(getter==0){
                        break;
                    }else if(getter==1){
                        cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                      }
                      insertAtStart(arr);
                      cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                      for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                      }
                    }else if(getter==2){
                        cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                        }
                        insertAtBtw(arr);
                        cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                        }
                    }else if(getter==3){
                        cout<<"\tArray before inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                        }
                        insertAtEnd(arr);
                        cout<<"\n\tArray after inserting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                        }
                    }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                }while(i<2);
                }
            break;
            case 2:
                {
                int i=0;
                do{
                cout<<endl<<"\n\t***************Menu*****************";
                cout<<"\n\t*                                  *";
                cout<<"\n\t*  1.Enter 0 if Exit               *";
                cout<<"\n\t*  2.Enter 1 if delete at First    *";
                cout<<"\n\t*  3.Enter 2 if delete at Between  *";
                cout<<"\n\t*  4.Enter 3 if delete at End      *";
                cout<<"\n\t*                                  *";
                cout<<"\n\t************************************";
                cout<<endl;
                int getter;
                cout<<"Please select the value: ";
                cin>>getter;
                    if(getter==0){
                        break;
                    }else if(getter==1){
                        cout<<"\tArray before deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                      }
                      deleteAtStart(arr);
                      cout<<"\n\tArray after deleting"<<endl;
                        cout<<"\t";
                      for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                      }
                    }else if(getter==2){
                        cout<<"\tArray before deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                        }
                        deleteAtBtw(arr);
                        cout<<"\n\tArray after deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                        }
                    }else if(getter==3){
                        cout<<"\tArray before deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                          cout<<arr[i]<<",";
                        }
                        deleteAtEnd(arr);
                        cout<<"\n\tArray after deleting"<<endl;
                        cout<<"\t";
                        for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                        }
                    }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                }while(i<2);
                }
            break;
            case 3:{
                searchArray(arr);
            }
            break;
            case 4:{
                updateArray(arr);
            }
            break;
            default:
                cout<<"please Enter the valid number"<<endl;
            }


        }while(i<2);

     }else{
         cout<<"Please Enter the value greater than 10"<<endl;
     }
     return 0;
 }
