////https://codeforces.com/contest/1974/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;
    string b;
    cin >> n >> b;

    set<char> distinct_chars(b.begin(), b.end());
    string r(distinct_chars.begin(), distinct_chars.end());

    unordered_map<char, char> mp;
    int len = r.length();
    for (int i = 0; i < len; ++i) {
        mp[r[i]] = r[len - i - 1];
    }

    string s;
    for (char ch : b) {
        s += mp[ch];
    }

    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
      solve();
    }
}
