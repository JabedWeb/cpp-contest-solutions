//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
      int n;
        cin >> n;
        set<int> onesCounts;
        bool isSquare = true;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int count = 0;
            for (char c : s) {
                if (c == '1') {
                    count++;
                }
            }
            if (count > 0) {
                onesCounts.insert(count);
            }
        }
        if (onesCounts.size() == 1) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }

int main() {
    int t; cin >> t;
    while(t--){
     solve();
    }
    
}
