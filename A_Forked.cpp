////https://codeforces.com/contest/1907/problem/0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a, int b, int xk, int yk, int xq, int yq) {
    int count = 0;
    set<pair<int, int>> visited_positions;
    vector<pair<int, int>> knight_moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    for (auto move : knight_moves) {
        int knight_x = xk + move.first;
        int knight_y = yk + move.second;

        if (visited_positions.find({knight_x, knight_y}) != visited_positions.end()) {
            continue;
        }

        visited_positions.insert({knight_x, knight_y});

        if ((abs(knight_x - xq) == abs(a) && abs(knight_y - yq) == abs(b)) ||
            (abs(knight_x - xq) == abs(b) && abs(knight_y - yq) == abs(a))) {
            count++;
        }
    }

    return count;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        cout << solve(a, b, xk, yk, xq, yq) << endl;
    }
    return 0;
}
