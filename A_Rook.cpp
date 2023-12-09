
////https://codeforces.com/contest/1907/problem/0
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
        int column = position[0];
        int row = position[1] - '0';

   
        for(char c = 'a'; c <= 'h'; c++) {
            if(c != column) {
                cout << c << row << endl;
            }
        }

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
