#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int left = 0, right = 0;
    int max_gifts = 0;
    while(right < n) {
        if(v[right] - v[left] < m) {
            right++;
        } else {
            max_gifts = max(max_gifts, right - left);
            left++;
        }
    }
    max_gifts = max(max_gifts, right - left);
    cout << max_gifts << endl;
    return 0;
}
