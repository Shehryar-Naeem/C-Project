//write a recursive function to find sum of first n even numbers


#include<iostream>
using namespace std;
int SumOfEven(int n){
    if(n==1){
        return 2;
    }else{
       return 2*n +(SumOfEven(n-1));
    }
}
int main(){
    cout<<SumOfEven(6);
    return 0;
}
