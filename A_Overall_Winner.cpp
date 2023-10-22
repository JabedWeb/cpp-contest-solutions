#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;cin>>s;
    int t=0,ti=-1;
    int a=0,ai=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            t++;
            ti=i;
        }
        else {
            a++;
            ai=i;
        }
    }
    if(t>a){
        cout <<"T";
    }
    else if (a>t){
        cout <<"A";
    }
    else{
        if(ti<ai){
            cout <<"T";
        }
        else{
            cout <<"A";
        }
    }
}