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

    //    int n, x; // n is the apartment number, x is apartments per floor from the second floor onwards
    //     cin >> n >> x;

    //     if (n <= 2) { // The first floor contains apartments 1 and 2
    //         cout << 1 << endl;
    //     } else {
    //         int p = 2; // p is the highest apartment number on the current floor being considered
    //         int a = 2; // a is the current floor number, starting from the second floor

    //         // Iterate to find out on which floor apartment n would be
    //         while (p + x < n) {
    //             p += x; // Add x apartments to the highest number on the previous floor
    //             a++;    // Move to the next floor
    //         }

    //         cout << a << endl; // Output the floor number
    //     }