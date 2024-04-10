//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(vector<int> binaryDecimals,int val){
        cin >> val;
        string ans = "YES";
        int past = val;
        while (true) {
            bool got = false;
            for (int num : binaryDecimals) {
                if (val >= num && val % num == 0) {
                    past = val;
                    val /= num;
                    got = true;
                    break;
                }
            }
            if (!got) {
                if (val == 1) {
                    ans = "YES";
                } else {
                    ans = "NO";
                }
                break;
            } else {
                if (val <= 0 || past == val) {
                    ans = "NO";
                    break;
                }
            }
        }
        cout << ans << endl;
}


int main() {
    vector<int> binaryDecimals = {
        100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000,
        10111, 10110, 10101, 10100, 10011, 10010, 10001, 10000, 1111, 1110,
        1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10
    };

    int t, val;
    cin >> t;

    while (t--) {
        solve(binaryDecimals,val);
    }
    return 0;

}
