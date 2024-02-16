// Write a C++ Program to Check Whether a Number is a Positive or Negative Number.

#include<iostream>
using namespace std;

int main(){
    
    int number;

    number = 0;
    
    /*cout << "Enter the number:- " <<endl; 
    cin >> number;*/   // User will assign the value.S

    if(number >= 0){
        cout << number << "is a Positive Number." <<endl;
    }
    else if(number == 0){
        cout << number << "its a zero." << endl;
    }
    else{
        cout << number << "is a Negative Number."<<endl;
    }
    return 0;
}