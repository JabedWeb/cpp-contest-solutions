////https://codeforces.com/problemset/problem/1901/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n; cin >> n;
    vector<ll> v(n); 
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll ans = v[0];
    for(int i = 1; i < n; i++){
        ans += max(0LL, v[i] - v[i - 1]);
    }
    cout << ans - 1 << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
