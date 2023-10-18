#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        string name;cin>>name;
        if(name.size()%2!=0) {
            cout <<"NO" <<endl;
            continue;
        }; 
        string first_sub=name.substr(0,name.size()/2);
        string second_sub=name.substr((name.size()/2));
    
        if(first_sub==second_sub){
            cout << "YES" <<endl;
        }
        else cout <<"NO" <<endl;
    }
}