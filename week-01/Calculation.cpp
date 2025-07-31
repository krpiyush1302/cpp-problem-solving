//write a program to take input from the user and add perform some mathematical operations on it

#include<iostream>
using namespace std;

int main() {
    float a, b, c;
    float sum, sub, mul, div;

    cout<<"Enter the 1st no: ";  
    cin>>a;
    cout<<"Enter the 2nd no: ";
    cin>>b;

    sum = a + b;
    cout<<"Sum of the given no is: "<<sum<<endl;

    sub = a - b;
    cout<<"Sub of the given no is: "<<sub<<endl;

    mul = a * b;
    cout<<"Mul of the given no is: "<<mul<<endl;

    div = a / b;
    cout<<"Div of the given no is: "<<div<<endl;

    return 0;
}