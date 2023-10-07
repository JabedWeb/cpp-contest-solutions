#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++){
        if(i%2!=0){
            if(s[i]=='1'){
                flag=true;
                cout<<"No"<<endl;
                break;
            }
        }
    }
    if(flag==false){
        cout<<"Yes"<<endl;
    }
}