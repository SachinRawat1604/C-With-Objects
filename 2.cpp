// Write a Program to Find the Length of the String Without using strlen() Function 

#include<iostream>
#include<cstring>
using namespace std;

string letter;

int main(){
    
    //string str = "Hello";
    int length = 0;

    cout << "Enter the String:- " << endl;
    cin >> letter; 
    string str = letter;

    for (int i = 0; str[i] != '\0'; i++){
        length++;
    }
    
    cout << "The length of the string is: " << length << endl;
    return 0;
}