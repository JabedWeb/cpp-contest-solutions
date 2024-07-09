////https://codeforces.com/problemset/problem/1426/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{

    int n, x;
    cin >> n >> x;
    if (n == 1 || n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        int start = n - 3;
        int floor = start / x + 2;
        cout << floor << endl;
    }
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
