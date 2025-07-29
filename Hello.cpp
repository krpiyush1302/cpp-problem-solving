//Write a program to take input from the user and print "Hello World";

#include<iostream>
using namespace std;

int main() {

    string data;
    cout<<"Please Enter the data to Print :";
    getline(cin, data); // <-- this reads the full line including spaces

    cout<<"Your Data is: "<<data;
    return 0;
}