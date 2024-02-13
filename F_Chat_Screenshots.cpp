//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int MAX_N = 200001;
vector<int> lis[MAX_N];
bool vis[MAX_N], dfsVis[MAX_N];

bool checkCycle(int node) {
    vis[node] = true;
    dfsVis[node] = true;
    for (auto it : lis[node]) {
        if (!vis[it]) {
            if (checkCycle(it)) return true;
        } else if (dfsVis[it]) {
            return true;
        }
    }
    dfsVis[node] = false;
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i <= n; i++) {
            lis[i].clear();
            vis[i] = 0;
            dfsVis[i] = 0;
        }
        for (int i = 0; i < k; i++) {
            vector<int> v(n);
            for (int j = 0; j < n; j++) {
                cin >> v[j];
            }
            for (int j = 2; j < n; j++) {
                lis[v[j - 1]].push_back(v[j]);
            }
        }
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                if (checkCycle(i)) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag) {
            cout << "NO";
        } else {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
