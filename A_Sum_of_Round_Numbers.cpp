#include <bits/stdc++.h>
using namespace std;

vector<int> roundNumbers(int n) {
    vector<int> roundNums;
    int divisor = 1;
    while (n > 0) {
        int remainder = n % 10;
        if (remainder > 0) roundNums.push_back(remainder * divisor);
        n /= 10;
        divisor *= 10;
    }
    return roundNums;
}

int main() {
    int t;cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> roundNums = roundNumbers(n);

        cout << roundNums.size() << endl;
        for (int i = 0; i < roundNums.size(); ++i) cout << roundNums[i] << " ";
        cout << endl;
    }

    return 0;
}
