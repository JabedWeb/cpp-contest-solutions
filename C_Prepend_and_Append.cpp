#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int count=0;
        int left=0;
        int right=n-1;
        while(left<right){
             if(s[left]=='1' && s[right]=='0' || s[left]=='0' && s[right]=='1'){
                count=count+2;
                
            }
            else{
                break;
            }
            left++;
            right--;
        }
        cout << n-count<<endl;
    }

}