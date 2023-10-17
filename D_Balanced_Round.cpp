#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int ans=INT_MIN;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(abs(v[i+1]-v[i]<=k)){
                count++;
                ans=max(ans,count);
            }
            else{
                ans=max(ans,count);
                count=0;
            }
        }
        if(ans==INT_MIN)cout<<0<<endl;
        else cout<<n-(ans+1)<<endl;
    }
}