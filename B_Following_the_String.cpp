//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

string recoverString(int n, vector<int> trace) {
    string s(n, 'a');
    int currentMax = 0;

    for (int i = 1; i < n; ++i) {
        if (trace[i] == 0) {
            s[i] = 'a' + (++currentMax); 
        } else {
            s[i] = s[trace[i] - 1]; 
        }
        cout <<currentMax<<endl;
    }

    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> trace(n);
        for(int i = 0; i < n; i++) cin >> trace[i];
        cout << recoverString(n, trace) << '\n';
    }
    return 0;
}


