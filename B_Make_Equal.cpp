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
    int n;
    cin >> n;
    vector<int> v(n);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    long long average = sum / n;

    for (int i = 0; i < n; i++) {
        if (average <= n ) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
}
