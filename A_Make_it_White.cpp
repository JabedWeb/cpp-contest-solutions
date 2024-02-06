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
        string s;
        cin >> n >> s;

        int first = s.find('B');
        int last = s.rfind('B');
        int length = (first == string::npos) ? 0 : last - first + 1;

        cout << length << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
       solve();
    }   
}
