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
    int n,b,d;
    cin >> n >> b >> d;
    vector<int> v(n);
    int empty_count = 0;
    int current_waste = 0;
    for (int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<=b){
            current_waste+=v[i] ;
        }
        if(current_waste>d){
            empty_count++;
            current_waste = 0;
        }
    }
    cout<<empty_count<<endl;
}

int main() {
    solve();
}
