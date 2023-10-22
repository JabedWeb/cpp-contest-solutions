#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    string s;cin>>s;
    int condition=0,condition1=0;
    if(s.size()==1){
        if(s[0]=='o'){
            cout <<"Yes";
            return 0;
        }
        if(s[0]=='x'){
            cout <<"No";
            return 0;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='o') {
            condition++;
        }
        else if (s[i]=='x'){
            condition1++;
        }
    }
    if( (condition >1 && condition1==0) || (condition>1 && condition1>1)){
        cout<<"Yes";
    }
    else{
        cout <<"No";
    }
}