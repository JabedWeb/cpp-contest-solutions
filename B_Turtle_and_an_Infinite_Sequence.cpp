////https://codeforces.com/contest/1981/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(ll n, ll m) {
    if (m == 0) {
        return n;
    }

    ll maxValue = 0;
    ll start = max(0LL, n - m);
    ll end = min(1000000000LL, n + m);
    
    for (ll i = start; i <= end; ++i) {
        maxValue = maxValue | i;
        if (maxValue == ((1LL << 31) - 1)) { 
            break;
        }
    }
    
    return maxValue; 
}

int main() {
    int t;
    cin >> t;
    
    vector<pair<ll, ll>> Cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> Cases[i].first >> Cases[i].second;
    }
    
    for (auto Case : Cases) {
        cout << solve(Case.first, Case.second) << endl;
    }
    
    return 0;
}