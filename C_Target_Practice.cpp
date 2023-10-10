#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generateGrid(int n) {
    vector<vector<int>> grid(n, vector<int>(n));
    int layers = (n + 1) / 2;

    for (int l = 0; l < layers; l++) {
        for (int i = l; i < n - l; i++) {
            for (int j = l; j < n - l; j++) {
                grid[i][j] = l + 1;
            }
        }
    }
    return grid;
}

int main() {
    int t; 
    cin >> t;
    int n=10;
    vector<vector<int>> grid = generateGrid(n);
    while (t--) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char c; 
                cin >> c;
                if (c == 'X') ans += grid[i][j];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
