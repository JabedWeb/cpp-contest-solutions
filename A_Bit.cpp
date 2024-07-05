////https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{

    int n;
    cin >> n;
    vector<string> str(n);

    int plus = 0;
    int minus = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str[i] = s;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '+')
            {
                plus++;
            }
            else if (s[j] == '-')
            {
                minus++;
            }
        }
    }
    plus = plus / 2;
    minus = minus / 2;

    cout << plus - minus << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
