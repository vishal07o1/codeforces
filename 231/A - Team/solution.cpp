#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int ans = 0;
 
    while(n--){
        int p, t, v;
        cin >> p >> t >> v;
        if(p+t+v>=2){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}