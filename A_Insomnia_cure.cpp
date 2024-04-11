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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int count=0;

    for(int i=1;i<=d;i++){
        if(k==1 || l==1 || m==1 || n==1){
            count=d;
            break;
        }
        else if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            count++;
        }
    }

    cout<<count<<endl;
}

int main() {
    solve();
}
