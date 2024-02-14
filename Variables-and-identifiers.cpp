#include<iostream>
using namespace std;

int main(){
    int minutes = 5; // here we create "minutes" as Identifier and after assigning the value (5) to it become Variables.
                    // And In "int" only assign interger value like (0,1,2,3,4,5). Don't assign Fraction, Rational, Irrational Number. 

    int Second; // now its knows as a Identifier.

    Second = minutes*60;
    cout << "There are" << Second << "sec in" << minutes<<"min."<< endl;
    return 0;

}