#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector <int> a(n+1);
        for(int i=1;i<a.size();i++){
            cin>>a[i];
        }

        int even1=0;
        int odd1=0;

        for(int i=1;i<a.size();i++){
            if(a[i]%2==0) even1++;
            else odd1++;
        }
        if(even1==n || odd1==n) {
            cout<<"YES"<<endl;
            continue;
        };
        
        for(int i=1;i<a.size();i++){
            if(i%2==0) a[i]=a[i]+1;
        }
        int even=0;
        int odd=0;

        for(int i=1;i<a.size();i++){
            if(a[i]%2==0) even++;
            else odd++;
        }
        if(even==n || odd==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}