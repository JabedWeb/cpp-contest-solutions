#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        int negCount = 0;
        int zeroCount = 0;
        int smallestNeg = INT_MAX;
        long long sum = 0;

        for(int i = 0; i < n; ++i) {
            cin >> v[i];
            sum += abs(v[i]);
            smallestNeg = min(smallestNeg, abs(v[i]));
            if(v[i] < 0) {
                negCount++;
            }
        }
        if(negCount % 2 == 1) {
            sum -= 2 * smallestNeg;
        }

        cout << sum << "\n";
    }
}
