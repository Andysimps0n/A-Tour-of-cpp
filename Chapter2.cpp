#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
struct Vector {
    int size;
    double* element;
};



void vector_init(Vector& v, int s) {
    // new lets array to have size confirmed at run time (<=>compile time)
    v.element = new double[s];
    v.size = s;
}


int read_and_sum(int s) {

    Vector v;
    vector_init(v, s);
    
    for(int i=0; i!=s; ++i){
        cin >> v.element[i];
    }


    double sum = 0;

    for (int i = 0; i < s; i++){
        sum += v.element[i];
    }

    return sum;
}

void acceses_to_vector(Vector v1, Vector& v2, Vector*v3){
    cout << v1.size << '\n';
    cout << v2.size << '\n';
    cout << v3->size << '\n';
}

int main() { 

    Vector v;
    vector_init(v, 5);
    acceses_to_vector(v, v, &v);



    return 0;

}