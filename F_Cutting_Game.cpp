////https://codeforces.com/contest/1974/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve() {
    int a, b, n, m;
    cin >> a >> b >> n >> m;

    vector<pair<int, int>> chips(n);
    for (int i = 0; i < n; ++i) {
        cin >> chips[i].first >> chips[i].second;
    }

    vector<pair<char, int>> moves(m);
    for (int j = 0; j < m; ++j) {
        cin >> moves[j].first >> moves[j].second;
    }

    int top = 1, bottom = a, left = 1, right = b;

    long long alice_points = 0, bob_points = 0;
    bool is_alice_turn = true;

    for (auto move : moves) {
        char direction = move.first;
        int k = move.second;
        long long points = 0;

        if (direction == 'U') {
            for (auto chip : chips) {
                if (chip.first >= top && chip.first < top + k && chip.second >= left && chip.second <= right) {
                    points++;
                }
            }
            top += k;
        } else if (direction == 'D') {
            for (auto chip : chips) {
                if (chip.first > bottom - k && chip.first <= bottom && chip.second >= left && chip.second <= right) {
                    points++;
                }
            }
            bottom -= k;
        } else if (direction == 'L') {
            for (auto chip : chips) {
                if (chip.second >= left && chip.second < left + k && chip.first >= top && chip.first <= bottom) {
                    points++;
                }
            }
            left += k;
        } else if (direction == 'R') {
            for (auto chip : chips) {
                if (chip.second > right - k && chip.second <= right && chip.first >= top && chip.first <= bottom) {
                    points++;
                }
            }
            right -= k;
        }

        if (is_alice_turn) {
            alice_points += points;
        } else {
            bob_points += points;
        }
        is_alice_turn = !is_alice_turn;
    }

    cout << alice_points << " " << bob_points << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
