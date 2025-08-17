#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() { 
 
   int t;
   cin >> t;

   // t loop
   for (int _ = 0; _ < t; _ ++) {
    int k;
    cin >> k;

    vector <string> names;
    vector <int> bottles;
    
    // K loop
    for (int i=0; i<k; i++) {
        string name;
        int bottle_number;


        cin >> name >> bottle_number;

        names.push_back(name);
        bottles.push_back(bottle_number);
    }

    int max_index = distance(bottles.begin(), max_element(bottles.begin(), bottles.end()));


    cout << names[max_index] << '\n';


   }
   return 0;
}