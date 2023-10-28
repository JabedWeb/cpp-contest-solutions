#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool flag = true;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                flag = false;
                break;
            }
        }

        if(n%2==0){
            cout<<"2" <<endl;
            for(int i=0;i<2;i++){
            
            cout <<"1" << " " << n <<endl;
            }
        }
        else{
            cout<<"4" <<endl;
            for(int i=0;i<4;i++){
            
            if(i==0 || i==1){
                cout <<"1" << " " << "2" <<endl;
            }
            else{
                cout <<"2" << " " << n <<endl;
            }
            }
        }
    }
}