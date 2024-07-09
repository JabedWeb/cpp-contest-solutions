////https://codeforces.com/problemset/problem/742/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl; 
        return;
    }

    int digit;
    int remain = n % 4;

    if (remain == 0)
    {
        digit = 6;
    }
    else if (remain == 1)
    {
        digit = 8;
    }
    else if (remain == 2)
    {
        digit = 4;
    }
    else if (remain == 3)
    {
        digit = 2;
    }
    cout << digit << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
