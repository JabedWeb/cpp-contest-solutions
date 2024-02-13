//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int sum; cin >> sum;
    string word = "aaa";
    
    sum -= 3; 
    
    for (int i = 2; i >= 0; --i) {
        if (sum > 25) {
            word[i] += 25;
            sum -= 25;
        } else {
            word[i] += sum;
            break;
        }
    }
    
    cout << word << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}
