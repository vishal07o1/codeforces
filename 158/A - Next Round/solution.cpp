#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int n, k;
    cin >>n>> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
     cin >> a[i];
    }
    int kthscore = a[k - 1];
    int count = 0;
    for (int i = 0; i < n;i++){
        if(a[i]>=kthscore && a[i]>0){
            count++;
        }
    }
    cout << count;
    return 0;
}