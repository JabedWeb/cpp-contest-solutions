////https://codeforces.com/contest/1974/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve() {
    int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)cin >> a[i];

    int beautiful_pairs = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            int diff_ct = 0;
            if (a[i] != a[j]) diff_ct++;
            if (a[i + 1] != a[j + 1]) diff_ct++;
            if (a[i + 2] != a[j + 2]) diff_ct++;
            if (diff_ct == 1) {
                beautiful_pairs++;
            }
        }
    }

    cout << beautiful_pairs << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}

