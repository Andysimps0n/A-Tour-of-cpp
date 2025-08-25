#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <cmath>  // for sqrt


 
int main() { 

    int m, n;
    vector<int> numbers;
    cin >> m >> n;


    for (int i = m; i <= n; i++){

        // is perfect square
       if (sqrt(i) == int(sqrt(i))){
            
           numbers.push_back(i);
       };
    }


    int sum, minimum;

    for (int e : numbers){
        sum += e;
    }

    minimum = numbers[0];

    // cout << sum << '\n';
    // cout << minimum << '\n';
    cout << sum << '\n';
   return 0;
}