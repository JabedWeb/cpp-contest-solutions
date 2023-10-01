#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;
    int count =0;

    if(x.size()==1){
        cout << "Yes";
        return 0;
    }

    for(int i=0;i<x.size()-1;i++){
        
        if(x[i]>x[i+1]){
            count++;
        }
    }
    

    if(count==x.size()-1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


}