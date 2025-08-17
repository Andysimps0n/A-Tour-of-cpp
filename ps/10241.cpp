#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() { 
 
    
    
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        
        int k = 0, y = 0;
        for (int i = 0; i < 9; i++) {
            int k_score, y_score;
            cin >> y_score >> k_score;
    
            y += y_score;
            k += k_score;
    
       }
    
       if (k > y) {
        cout << "Korea" << '\n';
       } else if (y > k) {
        cout << "Yonsei" << '\n';
       } else {
        cout << "Draw" << '\n';
       }
    }
 
 
   return 0;
}