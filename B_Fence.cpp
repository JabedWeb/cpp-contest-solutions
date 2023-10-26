#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int kSum = 0;
    for (int i = 0; i < k; i++) {
        kSum += a[i];
    }
    pair<int, int> minSum = {kSum, 0};

    for (int i = k; i < n; i++) {
        kSum = kSum - a[i - k] + a[i]; 
        if (kSum < minSum.first) {
            minSum.first = kSum;
            minSum.second = i - k + 1;
        }
    }
    cout << minSum.second +1 << endl;
}
