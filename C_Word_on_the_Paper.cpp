#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                char c;cin>>c;
                if(c>='a'&& c<='z')cout<<c;
            }
        }
        cout<<endl;
    }
}