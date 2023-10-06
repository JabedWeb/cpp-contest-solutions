#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        vector <char> v(n);
        for(int i=0;i<n;i++){
            v[i]=s[i];
        }
        sort(v.begin(),v.end());
        cout<<(int)v[n-1]-97+1<<endl;
    }
}