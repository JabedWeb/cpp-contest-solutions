#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,b;
    cin>>l>>b;
    for(int i=0;i<10;i++){
        l=l*3;
        b=b*2;
        if(l>b){
            cout<<i+1;
            break;
        }
    }
}