#include<iostream>
using namespace std;

int main(){
    //int plantcount = 8;
    int plantcount = 10;
    bool extraplant = (plantcount < 9);

    if(extraplant){
        plantcount++;
        cout << "There are" << plantcount << "plant" << endl;
    }
    
    cout << plantcount << "Plant not exist in our solar system" << endl;  
    return 0; 
}