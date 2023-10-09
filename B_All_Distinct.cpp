#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        set<int> v;
        for(int i=0;i<n;i++) {
            int x;cin>>x;
            v.insert(x);
        };
        int ans=n-v.size();
        if(ans%2==1) cout<<v.size()-1<<endl;
        else cout<<v.size()<<endl;
        
    }
}