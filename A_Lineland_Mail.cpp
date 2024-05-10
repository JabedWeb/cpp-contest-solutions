
////https://codeforces.com/contest/567/problem/A
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

void solve(){
    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<abs(v[i]-v[i+1])<<" "<<abs(v[i]-v[n-1])<<endl;
        }
        else if(i==n-1){
            cout<<abs(v[i]-v[i-1])<<" "<<abs(v[i]-v[0])<<endl;
        }
        else {
            //for min
            int left=abs(v[i]-v[i-1]);
            int right=abs(v[i]-v[i+1]);

            //for max
            int left1=abs(v[i]-v[0]);
            int right1=abs(v[i]-v[n-1]);

            cout<<min(left,right)<<" "<<max(left1,right1)<<endl;

        }
    }
}

int main() {
    solve();
}
