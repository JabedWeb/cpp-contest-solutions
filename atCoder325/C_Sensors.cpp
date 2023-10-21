#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e3 + 7;
vector<string> g;
bool visited[N][N];
int n, m;

vector<pii> dire = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

bool isValid(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j) {
    if (!isValid(i, j) || visited[i][j] || g[i][j] == '.') return;
    visited[i][j] = true;
    for (auto d : dire) {
        dfs(i + d.first, j + d.second);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        g.push_back(str);
    }
    int sensors = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '.' || visited[i][j]) continue;
            dfs(i, j);
            sensors++;
        }
    }
    cout << sensors << endl;
    return 0;
}
