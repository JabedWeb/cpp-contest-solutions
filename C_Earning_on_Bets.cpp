////https://codeforces.com/problemset/problem/1979/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    ll approximate= 1e9, sum = 0;
    vector<ll> ans1(n);
    
    for (int i = 0; i < n; i++) {
        ll ans =approximate/ a[i] + 1;
        ans1[i] = ans;
        sum += ans;
    }
    
    if (sum > 1e9) {
        cout << -1;
    } else {
        for (int i = 0; i < n; i++) {
            cout << ans1[i] << ' ';
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
