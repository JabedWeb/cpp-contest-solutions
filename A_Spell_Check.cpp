#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string name;cin>>name;
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }
        string name2="Timur";
        sort(name.begin(),name.end());
        sort(name2.begin(),name2.end());
        if(name==name2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}