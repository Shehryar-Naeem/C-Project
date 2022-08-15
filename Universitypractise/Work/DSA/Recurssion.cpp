// Simple recursion find factorial
#include<iostream>
using namespace std;
int factorial(int f){
    if(f<=1){
        return 1;
    }else{
    return f * factorial(f-1);
    }
}
int main(){
    int n;
    cout<<"please enter the number ";
    cin>>n;
    cout<<factorial(n);


    return 0;
}
