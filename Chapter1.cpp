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

void pointer() {

    char v[5] = {'A', 'B', 'C', 'D', 'E'};
    char* p = &v[3];
    char x = *p;


    for (auto element : v){
        cout << element << endl;
    }

}


void reference() {

    // x = 10, r = 10
    int x = 10;
    int& r = x;
    cout << r << endl; //10

    
    // x = 15, r = 15
    x = 15;
    cout << r << endl;
    cout << x << endl;

    // x = 20, r = 20
    r = 20;
    cout << r << endl;
    cout << x << endl;


}


void rangeFor() {
    int v[] = {0,1,2,3,4,5,6,7,8};
    for (auto e : v) {
        cout << e << '\n';

    };
}
void rangeRefer() {
    int v[] = {0,1,2,3,4,5,6,7,8};

    // mutating via referencing
    for (auto x : v){
        ++x;
    }
        for (auto e : v) {
        cout << e;
    };
}


void nullPointer() {
    int v[] = {1,2,3,4,5,6,7};
    int* p = v;
    cout << *p << '\n'; // 1


    p++;
    cout << *p << '\n'; // 2
}

int main() { 
    int v[] = {1,2,3,4,5,6,7};


    // 1
    for(int i=0; i<=6; i++) {
        cout << v[i];
    };
    cout << '\n';


    // 2
    for (auto e : v){
        cout << e;
    }
    cout << '\n';
    

    // 3
    int* p = v;
    int length = sizeof(v) / sizeof(v[0]);
    int* end = v + length;

    while (p!=end) {
        cout << *p;
        p++;
    }
    
    return 0;
}   


