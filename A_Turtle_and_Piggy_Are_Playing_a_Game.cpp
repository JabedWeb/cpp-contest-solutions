////https://codeforces.com/contest/1981/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(ll l, ll r) {
    ll x = r;
    int score = 0;
    
    while (x > 1) {
        x /= 2;
        score++;
    }
    
    return score;
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