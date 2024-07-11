////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

const int MAX_SIZE = 501;

bool solve(int gridA[MAX_SIZE][MAX_SIZE], int gridB[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int row = rows - 1; row >= 1; --row) {
        for (int col = cols - 1; col >= 1; --col) {
            if (gridA[row][col] != gridB[row][col]) {
                int dis = (gridB[row][col] - gridA[row][col] + 3) % 3;
                gridA[row][col] = gridB[row][col];
                gridA[row-1][col] = (gridA[row-1][col] + 2 * dis) % 3;
                gridA[row][col-1] = (gridA[row][col-1] + 2 * dis) % 3;
                gridA[row-1][col-1] = (gridA[row-1][col-1] + dis) % 3;
            }
        }
    }
    for (int row = 0; row < rows; ++row) {
        if (gridA[row][0] != gridB[row][0]) return false;
    }
    for (int col = 0; col < cols; ++col) {
        if (gridA[0][col] != gridB[0][col]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    int gridA[MAX_SIZE][MAX_SIZE], gridB[MAX_SIZE][MAX_SIZE];

    while (t--) {
        int rows, cols;
        cin >> rows >> cols;

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                char value;
                cin >> value;
                gridA[row][col] = value - '0';
            }
        }

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                char value;
                cin >> value;
                gridB[row][col] = value - '0';
            }
        }

        if (solve(gridA, gridB, rows, cols)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
