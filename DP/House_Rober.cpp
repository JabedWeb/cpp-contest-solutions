#include <bits/stdc++.h>
int dp[1000005];
using namespace std;
int solve(vector <int> v, int n){
    if(dp[n]!=-1) return dp[n];
    if(n==0) return v[0];
    else if(n==1) return max(v[0],v[1]);
    else{
        int choice1=v[n]+solve(v,n-2);
        int choice2=solve(v,n-1);
        return dp[n]= max(choice1,choice2);
    }
}
int main() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++) {
        cin>>v[i];
        dp[i]=-1;
    };
    int value=solve(v,n-1);
    cout<<value<<endl;
} 