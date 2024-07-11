////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> permu(n);
    for (int i = 0; i < n; ++i) {
        permu[i] = i + 1;
    }

    reverse(permu.begin(),permu.end());
    reverse(permu.begin()+(n-m),permu.end());

    for (int i = 0; i < n; ++i) {
        cout << permu[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        solve();
    }

    return 0;
}
