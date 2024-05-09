////https://codeforces.com/contest/136/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
    int n;cin>>n;
    vector <pair<int,int>> v(n+1);
    for(int i=1;i<=n;i++){
       int x;cin>>x;
         v[i] = {x,i}; //who get the gift from whom(i get the gift from x)
    }
    // first approach
    // for(int i=1;i<=n;i++){
    //    for(int j=1;j<=n;j++){
    //         if(v[j].first==i){
    //             cout<<v[j].second<<" ";
    //             break;
    //         }
    //    }
    // }

    // second approach
    sort(v.begin(),v.end());

    for(int i=1;i<=n;i++){
        cout<<v[i].second<<" ";
    }

}

int main() {
    solve();
}
