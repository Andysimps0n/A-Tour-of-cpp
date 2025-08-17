#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() { 
 
    int n;
    cin >> n;

    vector<int> v;


    for (int i=2; i*i <= n; i++){

        
        while (n % i == 0) {
            n /= i;
            v.push_back(i);
        }     
    }
    if (n > 1) v.push_back(n); // remaining prime factor



    for (auto e : v) {
        cout << e << '\n';
    }
 
}