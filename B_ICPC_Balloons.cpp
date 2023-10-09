#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    
    while(t--){
        vector<int> v(26,0);
        int n;cin>>n;
        string s;cin>>s;
        for(int i=0;i<n;i++){
            int convert = s[i] - 'A';
            if(v[convert]==0){
                v[convert]=2;
            }
            else{
                v[convert]++;
            }
        }
        int sum=0;
        for(int i=0;i<26;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
}