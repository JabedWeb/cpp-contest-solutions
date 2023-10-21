#include <bits/stdc++.h>
using namespace std;
int dp[10000007];
int solve(int n){
    if(dp[n]!=-1) return dp[n];
    if(n==1) return 1;
    else if(n==2) return 2;
    else if (n==3) return 4;
    else{
        int choice1=solve(n-1);
        int choice2=solve(n-2);
        int choice3=solve(n-3);
        return dp[n]= choice1+choice2+choice3;
    }
}

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) dp[i]=-1;
    int value=solve(n);
    cout <<value <<endl;
}