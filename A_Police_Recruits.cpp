////https://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin>>n;
    vector <int> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    int Untreated=0;
    int Recruits=0;
    for(int i=1;i<=n;i++){
        
        if(v[i]>0){
            Recruits+=v[i];
        }
        else if(v[i]<0){
            if(Recruits>0) Recruits--;
            else Untreated++;
        }
    }
    cout<<Untreated<<endl;
}

int main() {
    solve();
}
