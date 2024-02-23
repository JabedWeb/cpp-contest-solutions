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
        string s;
        cin >> s;
        int countA = 0, countB = 0;
       
        for (char c : s) {
            if (c == 'A') countA++;
            else if (c == 'B') countB++;
        }
        if (countA > countB) cout << "A" << endl;
        else cout << "B" << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
       solve();
    }
    
}
