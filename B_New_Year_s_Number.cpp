////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;
    cin>>n;
    if((n%2020)<=(n/2020)) {
        cout <<"YES" <<endl;
    }
    else cout <<"NO" <<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      solve();
    }
}