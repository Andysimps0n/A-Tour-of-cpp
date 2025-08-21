#include <iostream>
using namespace std;

int main() { 


    class Vector {
    public:
        Vector(int s) 
            : element{new double[s]}, size{s} 
        {}

        double& operator[](int i) { 
            return element[i]; 
        }

        Vector& operator+(int k){
            for (int i=0; i != size; i++){
                element ++;
            }

            return *this;
        }

        Vector& operator++(int j){
                Vector temp(size);
                for (int i = 0; i < size; i++){
                   temp[i] = element[i] + j;
                }
                return temp;

        }

        int get_size() { 
            return size; 
        }

    private:
        double* element;
        int size;
    };


    Vector v(5);

    cout << v[1] << '\n';
    for (int i = 0; i < 5; i++){
       v[i] = i;
       cout << v[i] << '\n';
    }

    return 0;
}
