#include<iostream>
using namespace std;

int printFib(int n){
    if(n<=1){
        return n;
    }


    return printFib(n - 1) + printFib(n - 2);
}

int main(){
    int n;
    cout<<"enter Number : ";
    cin>>n;

    cout<<"Fibonacci Series"<<endl;
    for(int i=0; i<n; i++){
        cout<<printFib(i)<<" ";
    }
    cout<<endl;

    cout<<"Fibonacci Number at position "<<n<<" is "<<printFib(n)<<endl;
    return 0;
}