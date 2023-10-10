#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        int sum=0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            sum+=v[i];
        };
        sort(v.begin(),v.end());
        int minVal=v[0];
        cout<<sum-n*minVal<<endl;
        
    }
}