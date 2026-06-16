#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string words;
 
    for (int i = 0; i < n; i++) {
 
        cin >> words;
 
        if(words.length()>10){
            cout << words[0] << words.length() - 2 << words[words.length() - 1] << endl;
        }
        else{
            cout << words<<endl;
        }
    }
    return 0;
}