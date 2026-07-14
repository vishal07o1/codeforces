#include<iostream>
#include<string>
using namespace std;
 int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int maxLen = 0;
        int curr = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                curr++;
                if (curr > maxLen)
                    maxLen = curr;
            } else {
                curr = 0;
            }
        }
 
        cout << (maxLen + 1) / 2 << endl;
    }
 
    return 0;
}