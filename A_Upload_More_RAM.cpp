////https://codeforces.com/problemset/problem/1987/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{
    int n, k;
    cin >> n >> k;

    int f_upload = 1;

    n = n - 1;

    int remaining = n * k;

    cout << f_upload + remaining << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
