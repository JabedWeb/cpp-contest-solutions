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
string position;
        cin >> position;
        int column = position[0]; // 'a' to 'h'
        int row = position[1] - '0'; // 1 to 8

        // Output all the horizontal moves
        for(char c = 'a'; c <= 'h'; c++) {
            if(c != column) {
                cout << c << row << endl;
            }
        }

        // Output all the vertical moves
        for(int r = 1; r <= 8; r++) {
            if(r != row) {
                cout << (char)column << r << endl;
            }
        }
        cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
     solve();
    }
   
}
