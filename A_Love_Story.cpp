#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        string tim;cin>>tim;
        string code="codeforces";
        int count=0;
        for(int i=0;i<tim.length();i++){
            if(tim[i]!=code[i]) count++;
        }
        cout <<count <<endl;
    }
}