#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll inversion(vector<int> v,int n){
    ll sum=0,count=0;
    for(int i=0;i<n;i++){
        if(v[i]==1) count++;
        else sum+=count;
    }
    return sum;
}

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=inversion(v,n);

        vector<int>v1(v);
        for(int i=0;i<n;i++){
            if(v1[i]==0){
                v1[i]=1;
                break;
            }
        }
        ans=max(ans,inversion(v1,n));

        for(int i=n-1;i>=0;i--){
            if(v[i]==1){
                v[i]=0;
                break;
            }
        }
        ans=max(ans,inversion(v,n));

        cout << ans <<endl;
    }
}