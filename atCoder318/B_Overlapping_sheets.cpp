#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int plane[101][101] = {0};

    int max_x = 0;
    int max_y = 0;

    for (int i = 1; i <= n; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        max_x = max(max_x, b);
        max_y = max(max_y, d);

        for (int x = a; x < b; ++x) {
            for (int y = c; y < d; ++y) {
                plane[x][y] = 1;
            }
        }
    }

    int sum = 0;
    for (int x = 0; x <= max_x; ++x) {
        for (int y = 0; y <= max_y; ++y) {
            sum += plane[x][y];
        }
    }

    cout << sum << endl;
    return 0;
}
