
//https://codeforces.com/problemset/problem/1890/B
#include <bits/stdc++.h>
using namespace std;

bool is_good(string &s) {
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            return false;
        }
    }
    return true;
}

bool can_make_good( string &s, string &t) {
  
    for (int i = 0; i < s.length(); ++i) {
        string combined = s;
        for (int j = 0; j <= i; ++j) {
            
            combined = combined.substr(0, j + j*t.length()) + t + combined.substr(j + j*t.length());
        }
        //cout << combined << endl;
        if (is_good(combined)) {
            return true;
        }
    }
    return false;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        if (can_make_good(s, t)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
