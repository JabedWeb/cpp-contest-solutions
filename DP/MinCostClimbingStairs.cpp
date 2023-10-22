//https://leetcode.com/problems/min-cost-climbing-stairs/

#include <bits/stdc++.h>
using namespace std;
int solve(vector <int> v, int n){
    if(n==0) return v[0];
    else if(n==1) return v[1];
    else{
        int choice1=v[n]+solve(v,n-1);
        int choice2=v[n]+solve(v,n-2);
        return min(choice1,choice2);
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++) cin>>v[i];
    int value=min(solve(v,n-1),solve(v,n-2));
    cout<<value<<endl;
}