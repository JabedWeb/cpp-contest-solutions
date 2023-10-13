#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        bool flag=true;
        for(int j=0;j<8;j++){
            string s;cin>>s;
            int count=0;
            for(int i=0;i<8;i++){
                if(s[i]=='R'){
                    count++;
                }
            }
            if(count==8){
                flag=false;
            }
        }
        if(flag){
            cout<<"B"<<endl;
        }
        else{
            cout<<"R"<<endl;
        }
    }
}