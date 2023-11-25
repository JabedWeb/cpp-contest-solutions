//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

string can_choose_integers(long long n, long long k, long long x) {
 
    long long min_sum = k * (k + 1) / 2;
    long long max_sum = k * (2 * n - k + 1) / 2;

    
    return (min_sum <= x && x <= max_sum) ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        cout << can_choose_integers(n, k, x) << endl;
    }

    return 0;
}

