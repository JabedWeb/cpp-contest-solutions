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
    string s;
    cin >> s;
       for (int i = 1; i < int(s.size()); ++i) {
        if (s[i] != s[i-1]) {
            swap(s[i], s[i-1]);
            cout << "YES\n" << s << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main() {
    int t;cin>>t;
    while(t--){
        solve();
    }
}
