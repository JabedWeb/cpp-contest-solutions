//https://atcoder.jp/contests/abc326/tasks/abc326_c
////https://codeforces.com/contest/770/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n,k;cin>>n>>k;
    int count=0;
    char c='a';
    for(int i=0;i<n;i++){
        count++;
        cout << c;
        c++;
        if(count==k) {
            c='a';
            count=0;
        }
    }
    cout << endl;
}

int main() {
    solve();
}
