
////https://codeforces.com/contest/1969/problem/B
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int solve(int a,vector <int> &v){

}

void solve(){
   string s;
    cin>>s;
    int count=0;
    int t=0;
    for(int i=0;i<s.size();i++){
    if(s[i]=='1')  t++;
    else if(t>0)  count+=t+1;
    }
    cout<<count<<endl;
} 

int main() {
    int t; cin >> t;
    while(t--){
       solve();
    }
    
}
