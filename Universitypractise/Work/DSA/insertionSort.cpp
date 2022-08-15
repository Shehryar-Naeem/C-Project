//sorting insertion sort and bubble sort and selection sort
#include<iostream>
using namespace std;
void insertionSort(int ar[],int n){
    cout<<"\n***************** Insertion Sort Start *********************"<<endl;
    cout<<"before"<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<",";
    }
    for(int i=1;i<n;i++){
        int j,temp=ar[i];
        j=i-1;
        while(j>=0&&ar[j]>temp){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=temp;
    }

    cout<<"\nafter"<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<",";
    }
    cout<<"\n***************** Insertion Sort End **********************"<<endl;
}

void bubbleSort(int ar[],int n){
    cout<<"\n***************** Bubble Sort Start *********************"<<endl;
    cout<<"before"<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<",";
    }

    for(int i=0;i<n-1;i++){
        int temp;
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                flag=1;
            }

        }
        if(flag==0){
            break;
        }
    }
    cout<<"\nAfter"<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<",";
    }

    cout<<"\n***************** Bubble Sort End **********************"<<endl;
}

void selectionSort(int ar[],int n){
    cout<<"\n***************** selection Sort Start *********************"<<endl;
    cout<<"before"<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<",";
    }

    for(int i=0;i<n-1;i++){
        int temp,minVal=i;
        for(int j=i+1;j<n;j++){
            if(ar[minVal]>ar[j]){
                minVal=j;
            }
        }
        temp=ar[i];
        ar[i]=ar[minVal];
        ar[minVal]=temp;
    }

    cout<<"\nAfter"<<endl;
    for(int i=0;i<n;i++){
        cout<<ar[i]<<",";
    }

    cout<<"\n***************** selection Sort End **********************"<<endl;
}
int main(){
    int n=10;
    int arr[n]={9,7,5,8,4,6,3,2,1,4};
//    insertionSort(arr,n);
//    bubbleSort(arr,n);
    selectionSort(arr,n);
    return 0;
}
