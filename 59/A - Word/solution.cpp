#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int upper = 0;
    int lower = 0;
 
    for (char ch : s) {
        if (isupper(ch))
            upper++;
        else
            lower++;
    }
 
    if (upper > lower) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
 
    cout << s;
 
    return 0;
}