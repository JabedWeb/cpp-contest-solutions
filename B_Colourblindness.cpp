#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n;cin>>n;
        string s,s1;cin>>s>>s1;
        int count= 0;
        for(int i=0;i<n;i++){
            if(s[i]==s1[i] || s[i]=='B' && s1[i]=='G' || s[i]=='G' && s1[i]=='B'){
                count++;
            }

        }
        if(count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}