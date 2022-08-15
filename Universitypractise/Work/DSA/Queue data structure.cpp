// simple Queue
#include<iostream>
using namespace std;
int n,N;
bool isFull(){
    if(N==n){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(N==0){
        return true;
    }else{
        return false;
    }
}


// Top at zero mean top fixed at zero index
void enQueue(int ar[]){
    int val;
    if(isFull()){
        cout<<"Your queue is already full"<<endl;
    }else{
        cout<<"Please Enter the value";
        cin>>val;
        ar[N]=val;
        N++;
    }
    for(int i=0;i<N;i++){
        cout<<ar[i]<<endl;
    }
}
void deQueue(int ar[]){
    for(int i=0;i<N;i++){
        ar[i]=ar[i+1];
    }
    ar[N-1]=0;
    N--;
    for(int i=0;i<N;i++){
        cout<<ar[i]<<endl;
    }
}

// top at tail mean top fixed at last index;
void enQueueAtTailTop(int ar[]){
    int val;
    for(int i=N;i>0;i--){
        ar[i]=ar[i-1];
    }
    cout<<"Please Enter the value";
    cin>>val;
    ar[0]=val;
    N++;
    for(int i=0;i<N;i++){
        cout<<ar[i]<<endl;
    }
}
void deQueueAtTailTop(int ar[]){
    ar[N-1]=0;
    N--;
    for(int i=0;i<N;i++){
        cout<<ar[i]<<endl;
    }
}
int main(){
    N=0,
    n=20;
    int arr[n]={1,2,3,4,5,6,78,2,8};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            N++;
        }
    }
    int i=0,getval;
    do{
        cout<<endl<<"\n\t*******************Menu*************************";
            cout<<"\n\t*                                              *";
            cout<<"\n\t*    1.Enter 0 if Exit                         *";
            cout<<"\n\t*    2.Enter 1 if perform top at head Queue    *";
            cout<<"\n\t*    3.Enter 2 if perform top at tail queue    *";
            cout<<"\n\t*                                              *";
            cout<<"\n\t************************************************";
            cout<<endl;
            cout<<"Please select the option which your perform: ";
            cin>>getval;
            switch(getval){
            case 0:
                exit(0);
                break;
            case 1:
                {
                     int i=0,get;
                do{
                   cout<<endl<<"\n\t**********************Menu*****************************";
                        cout<<"\n\t*                                                      *";
                        cout<<"\n\t*    1.Enter 0 if Exit                                 *";
                        cout<<"\n\t*    2.Enter 1 if perform Enqueue operation at head    *";
                        cout<<"\n\t*    3.Enter 2 if perform deQueue operation at head    *";
                        cout<<"\n\t*                                                      *";
                        cout<<"\n\t********************************************************";
                        cout<<endl;
                    cout<<"Please select the option which your perform: ";
                    cin>>get;
                        if(get==0){
                            break;
                        }else if(get==1){
                            enQueue(arr);
                        }else if(get==2){
                            deQueue(arr);
                        }
                }while(i<1);
            break ;
            }
            case 2:
                {
                  int i=0,get;
                do{
                   cout<<endl<<"\n\t**********************Menu*****************************";
                        cout<<"\n\t*                                                      *";
                        cout<<"\n\t*    1.Enter 0 if Exit                                 *";
                        cout<<"\n\t*    2.Enter 1 if perform Enqueue operation at tail    *";
                        cout<<"\n\t*    3.Enter 2 if perform deQueue operation at tail    *";
                        cout<<"\n\t*                                                      *";
                        cout<<"\n\t********************************************************";
                        cout<<endl;
                    cout<<"Please select the option which your perform: ";
                    cin>>get;
                        if(get==0){
                            break;
                        }else if(get==1){
                            enQueueAtTailTop(arr);
                        }else if(get==2){
                            deQueueAtTailTop(arr);
                        }
                }while(i<1);
                }
            }
    }while(i<1);

    return 0;
}
