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
// void print(int x) {
//     cout << x<< endl;
// }

// void print(string x) {
//     cout << x << endl;
// }




int main() { 

    char v[5] = {'A', 'B', 'C', 'D', 'E'};
    // cout << sizeof(v) << endl; // 5
    char* p = &v[3];
    char x = *p;

    cout << v[3] << endl;


    return 0;
}   


