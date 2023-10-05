#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;

    while (t--) {
        int n;cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)cin >> arr[i];
        

        int longest = 0;
        int current = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                current++;
                longest = max(longest, current);
            } else {
                current = 0;
            }
        }

        cout << longest << endl;
    }

    return 0;
}
