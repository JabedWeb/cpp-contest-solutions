#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;

        long long groups = (k-1)/(n-1);
        long long lastValueOfLastGroup =groups*n;
        long long positionNextGroup = (k-1)%(n-1);
       
        long long ans = lastValueOfLastGroup + positionNextGroup + 1;
        cout << ans << endl;
    }
    return 0;
}
