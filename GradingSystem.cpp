/*Write a program to take input marks of a studnet and perform opertaions

1. You are given as input marks of a student.
2. Display an appropriate message based on the following rules.
 2.1  for marks above 90 print Excellent.
 2.2  for marks above 80 and less than equal to 90, print Good.
 2.3  for marks above 70 and less than equal to 80, print Fair.
 2.4  for marks above 60 and less than equal to 70, print Meets Expectation.
 2.5  for marks less than equal to 60, print Below Average.
*/

#include<iostream>
using namespace std;
int main() {
    int marks;
    
    cout<<"Enter the marks of the Student: ";
    cin>>marks;

    if(marks<90) {
        cout<<"Excellent"<<endl;
    } else if(marks<80 && marks >=90) {
        cout<<"Good"<<endl;
    } else if(marks<70 && marks >=80) {
        cout<<"Fair"<<endl;
    } else if(marks<60 && marks >=70)  {
        cout<<"Meets Expectation"<<endl;
    } else {
        cout<<"Below Average"<<endl;
    }

    return 0;
}