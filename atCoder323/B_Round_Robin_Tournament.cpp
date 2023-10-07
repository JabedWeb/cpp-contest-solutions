#include <bits/stdc++.h>
using namespace std;

bool customSort(pair<int, int>& a, pair<int, int>& b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int count = 0;
        string s; cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'o') {
                count++;
            }
        }
        v[i] = make_pair(count, i);
    }

    sort(v.begin(), v.end(), customSort);

    for (int i = 0; i < n; i++) {
        cout << v[i].second + 1 << " ";
    }
}
