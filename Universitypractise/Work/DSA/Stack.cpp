//stack Implementation
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
bool isEmpty(){
    if(N==0){
        return true;
    }else{
        return false;
    }
}

void pushStackAtHigherIndex(int ar[]){
    if(isFull()){
        cout<<"Your Array is already Full you not enter further value"<<endl;
    }else{
        int val;
        cout<<"Please push the value: ";
        cin>>val;
        ar[N]=val;
        N++;
    }
}
void popStackAtHigherIndex(int ar[]){
    if(isEmpty()){
        cout<<"You have no element in array for performing pop functionality"<<endl;
    }else{
        ar[N-1]=0;
        N--;
    }
}
void pushStackAtLowerIndex(int ar[]){
    if(isFull()){
        cout<<"Your Array is already Full you not enter further value"<<endl;
    }else{
        int val;
        cout<<"Please Push the value: ";
        cin>>val;
        for(int i=N;i>0;i--){
            ar[i]=ar[i-1];
        }
        ar[0]=val;
        N++;
    }
}
void popStackAtLowerIndex(int ar[]){
    if(isEmpty()){
        cout<<"You have no element in array for performing pop functionality"<<endl;
    }else{
        for(int i=0;i<N;i++){
            ar[i]=ar[i+1];
        }
        ar[N-1]=0;
        N--;
    }
}
int main(){
    n=20;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            N++;
        }
    }
    int get,i=0;
    do{
        cout<<endl<<"\n\t*********************** Menu**************************";
            cout<<"\n\t*                                                      *";
            cout<<"\n\t*  1.Enter 0 if Exit                                   *";
            cout<<"\n\t*  2.Enter 1 if you want to select atHigher Index      *";
            cout<<"\n\t*  3.Enter 2 if you want to select atLower Index       *";
            cout<<"\n\t*                                                      *";
            cout<<"\n\t********************************************************";
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
                        cout<<endl<<"\n\t***************************** Menu *********************************";
                            cout<<"\n\t*                                                                    *";
                            cout<<"\n\t*  1.Enter 0 if Exit                                                 *";
                            cout<<"\n\t*  2.Enter 1 if you want to select push function AtHigher Index      *";
                            cout<<"\n\t*  3.Enter 2 if you want to select pop function AtHigher Index       *";
                            cout<<"\n\t*                                                                    *";
                            cout<<"\n\t**********************************************************************";
                            cout<<endl;
                            int getVal;
                        cout<<"Please Select the option: ";
                        cin>>getVal;
                        if(getVal==0){
                            break;
                        }else if(getVal==1){
                            cout<<"\tArray before Push"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                            pushStackAtHigherIndex(arr);
                            cout<<"\n\tArray after Push"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                        }else if(getVal==2){
                            cout<<"\tArray before pop"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                            popStackAtHigherIndex(arr);
                            cout<<"\n\tArray after pop"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                        }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                    }while(i<1);
                }
                break;
            case 2:
                {
                    int i=0;
                    do{
                        cout<<endl<<"\n\t***************************** Menu *********************************";
                            cout<<"\n\t*                                                                    *";
                            cout<<"\n\t*  1.Enter 0 if Exit                                                 *";
                            cout<<"\n\t*  2.Enter 1 if you want to select push function AtLower Index       *";
                            cout<<"\n\t*  3.Enter 2 if you want to select pop function AtLower Index        *";
                            cout<<"\n\t*                                                                    *";
                            cout<<"\n\t**********************************************************************";
                            cout<<endl;
                            int getVal;
                        cout<<"Please Select the option: ";
                        cin>>getVal;
                        if(getVal==0){
                            break;
                        }else if(getVal==1){
                            cout<<"\tArray before Push"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                            pushStackAtLowerIndex(arr);
                            cout<<"\n\tArray after Push"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                        }else if(getVal==2){
                            cout<<"\tArray before pop"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                            popStackAtLowerIndex(arr);
                            cout<<"\n\tArray after pop"<<endl;
                            cout<<"\t";
                            for(int i=0;i<N;i++){
                            cout<<arr[i]<<",";
                            }
                            cout<<endl;
                        }else{
                        cout<<"Please Enter the valid Number"<<endl;
                    }
                    }while(i<1);
                }
                break;
            default:
                cout<<"please Enter the valid number"<<endl;

            }
    }while(i<0);
    return 0;
}
