#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    ll m, n;

    cin>>m>>n;

    if(m-n > 0){
        if(m-n > 3){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        if(abs(m-n) > 2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}