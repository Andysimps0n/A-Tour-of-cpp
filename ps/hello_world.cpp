#include <iostream>
using namespace std;

int main(){
    int t;
    
    cin >> t;
    
    
    for (int i=0; i < t; i++) {
        int r, e, c;
        cin >> r >> e >> c;
        if ((e - c) > r) {
            cout << "advertise" << '\n';
        } else if ((e - c) == r) {
            cout << "does not matter" << '\n';
        } else if ((e-c) < r) {
            cout << "do not advertise" << '\n';
        }
    }


    return 0;
}





