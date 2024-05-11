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
    string s1,s2;cin>>s1>>s2;
    int sum1=0,sum2=0;
    for(int i=0;i<s1.size();i++){
        sum1+=tolower(s1[i]);
        sum2+=tolower(s2[i]);
    }
    if(sum1==sum2)cout<<0;
    else if(sum1>sum2)cout<<1;
    else cout<<-1;

}

int main() {
    solve();
}
