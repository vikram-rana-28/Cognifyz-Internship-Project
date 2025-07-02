#include<iostream>
using namespace std;

int main(){
    float a, b;
    char op;

    cout<<"Enter first Number : ";
    cin>>a;
    cout << "Enter operator (+, -, *, /, %) : ";
    cin>>op;
    cout<<"Enter second Number : ";
    cin>>b;

    switch(op){
        case '+' : cout<<"Result : "<<a+b; break;
        case '-' : cout<<"Result : "<<a-b; break;
        case '*' : cout<<"Result : "<<a*b; break;
        case '/': cout << (b != 0 ? "Result : " + to_string(a / b) : "Cannot divide by 0"); break;
        case '%': cout << "Result : " << int(a) % int(b); break;
        default : cout<<"Invalid Operator ";
    }
    return 0;
}