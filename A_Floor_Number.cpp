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

        if (n <= 2) {
            cout << 1 << endl;
        } else {
            int p = 2;
            int a = 2; 

            while (p + x < n) {
                p += x;
                a++;
            }

            cout << a << endl;
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