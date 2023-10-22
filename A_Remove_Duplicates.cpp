#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector <int>v2(v);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                v2[i]=-1;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
       if(v2[i]!=-1){
           count++;
        }   
    }
    cout <<count <<endl;
    for(int i=0;i<n;i++){
        if(v2[i]!=-1){
            cout <<v2[i] <<" ";
        } 
    }
}