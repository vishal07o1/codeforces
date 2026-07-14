#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        bool ok = true;
 
        for (int i = 0; i < n - 1; i++) {
 
            long long need = i + 1;   // required final value at position i
 
            if (a[i] < need) {
                ok = false;
                break;
            }
 
            long long extra = a[i] - need;
            a[i + 1] += extra;
        }
 
        if (ok && a[n - 1] >= n)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}