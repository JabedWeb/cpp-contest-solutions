////https://atcoder.jp/contests/abc360/tasks/abc360_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;



bool solve(string S, string T, int w, int c) {
    string result;
    for (int i = 0; i < S.size(); i += w) {
        if (i + c - 1 < S.size()) {
            result += S[i + c - 1];
        }
    }
    return result == T;
}

int main() {
    string S, T;
    cin >> S >> T;
    
    int S_len = S.size();
    int T_len = T.size();
    
    for (int w = 1; w < S_len; ++w) {
        for (int c = 1; c <= w; ++c) {
            if (solve(S, T, w, c)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
