#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, m;
        cin >> n >> m;
 
        vector<ll> pref(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            pref[i] = pref[i - 1] + x;
        }
 
        vector<int> b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];
 
        sort(b.begin(), b.end());
 
        ll ans = 0;
        int last = 0;
 
        for (int x : b) {
            ll seg = pref[x] - pref[last];
            ans += abs(seg);
            last = x;
        }
 
        // Last segment cannot be flipped
        ans += pref[n] - pref[last];
 
        cout << ans << "
";
    }
 
    return 0;
}