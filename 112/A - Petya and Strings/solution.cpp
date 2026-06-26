#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string s1, s2;
    cin >> s1 >> s2;
 
    // Convert both strings to lowercase
    //transform(where to start,where to end,where to write result(destination,operation))
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    //it directly compares cause cpp knows alphabet in ASCII value
 
    if (s1 < s2)
        cout << -1;
    else if (s1 > s2)
        cout << 1;
    else
        cout << 0;
 
    return 0;
}