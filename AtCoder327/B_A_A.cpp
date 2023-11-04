/// https://atcoder.jp/contests/abc327/tasks/abc327_b
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

bool check(long long mid, long long B) {
    long long ans = 1;
    for (int i = 0; i < mid; i++) {
        if (ans > B) return false;
        ans *= mid;
    }
    return ans == B;
}

int main() {
    long long B;
    cin >> B;
    long long low = 1, high = 100000, ans = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid, B)) {
            ans = mid;
            break;
        } else if (pow(mid, mid) < B) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
