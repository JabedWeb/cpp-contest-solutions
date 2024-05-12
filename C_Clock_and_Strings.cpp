//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

bool isBetween(int point, int start, int end, int clockSize) {
    if (start < end) {
        return (point > start && point < end);
    } else { 
        return (point > start || point < end);
    }
}

bool solve(int a, int b, int c, int d) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);

   
    bool cBetweenAB = isBetween(c, a, b, 12);
    bool dBetweenAB = isBetween(d, a, b, 12);

    bool aBetweenCD = isBetween(a, c, d, 12);
    bool bBetweenCD = isBetween(b, c, d, 12);

    return (cBetweenAB != dBetweenAB) || (aBetweenCD != bBetweenCD);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        if (solve(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
