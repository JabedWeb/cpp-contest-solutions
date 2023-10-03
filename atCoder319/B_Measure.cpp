#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;

    vector <int> divisors;
    for(int j=1;j<=9;j++) if(n%j==0) divisors.push_back(j);
    

    for(int i =0;i<=n;i++){
        bool flag = false;
        for(int j : divisors){
            if(i%(n/j)==0){
                cout<<j;
                flag = true;
                break;
            }
        }
        if(!flag) cout<<"-";
    }
    return 0;
}