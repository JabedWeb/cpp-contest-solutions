#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                cout<<"NO"<<endl;
                flag=true;
                break;
            }
        };
        if(flag)continue;
        cout<<"YES"<<endl;
    }
}