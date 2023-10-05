#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int mih=0,bia=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0) mih+=v[i];
            else bia+=v[i];
        }
        if(mih>bia) cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    return 0;
}
