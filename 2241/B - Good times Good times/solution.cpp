#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;  // number of test cases
 
    while (t--) {
        long long x;
        cin >> x;  // read the number x
 
        // Step 1: count how many digits x has
        long long temp = x;
        int digitCount = 0;
        while (temp > 0) {
            digitCount++;
            temp = temp / 10;
        }
 
        // Step 2: compute y = 10^digitCount + 1
        // Example: if x has 2 digits, y = 100 + 1 = 101
        long long y = 1;
        for (int i = 0; i < digitCount; i++) {
            y = y * 10;
        }
        y = y + 1;
 
        // Step 3: print the answer
        cout << y << endl;
    }
 
    return 0;
}