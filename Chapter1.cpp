#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



// Returning Values and Argument Types

void sayHello() {
    cout << "Hello!" << endl;
}



int addOne(int x){
    x++;
    return x;
}




// Funciton Overloading
void print(int x) {
    cout << x<< endl;
}

void print(string x) {
    cout << x << endl;
}




int main() { 
    // cout << 1 << endl;
    // sayHello();
    // cout << addOne(1) << endl;
    
    
    print(1);
    print("x");
    
    return 0;
}   

