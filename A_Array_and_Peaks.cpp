//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n, k;

    cin >> n >> k; 
    
    if (k > (n - 1) / 2) {
        cout << "-1" <<endl; 
        return;
    } 
    for (int i = 1; i <= k; i++) {
        cout << i << " " << n - i + 1 << " ";
    }
    for (int i = k + 1; i <= n - k; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
      solve();
    }
    
}
