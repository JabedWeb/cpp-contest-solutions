////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (s == "Tetrahedron")
        {
            total = total + 4;
        }
        else if (s == "Cube")
        {
            total = total + 6;
        }
        else if (s == "Octahedron")
        {
            total = total + 8;
        }
        else if (s == "Dodecahedron")
        {
            total = total + 12;
        }
        else if (s == "Icosahedron")
        {
            total = total + 20;
        }
    }
    cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
