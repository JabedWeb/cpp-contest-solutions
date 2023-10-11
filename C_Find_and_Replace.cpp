//https://codeforces.com/contest/1807/problem/C

// learn current and previous elements excess 
//convert char to int then int to to char

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        string s;cin >> s;

        int arr[26];
        for (int i = 0; i < 26; i++) arr[i] = -1; 

        for (int i = 0; i < n; i++) {
            int curr = (s[i] - 'a');
            if (arr[curr] == -1) { 
                if (i % 2 == 0)arr[curr] = 1;
                else arr[curr] = 0;
            }
        }

        bool flag=true;
        int previous = -1; 
        int current_elements = -2; 
        for (int i = 0; i < n; i++) {
            int curr = s[i] - 'a';
            current_elements = arr[curr];
            if(previous==current_elements)flag=false;
            // cout << arr[curr]; 
            previous = current_elements;
        }
        if(!flag) cout <<"NO"<<endl;
        else cout  <<"YES" <<endl;
    }
    return 0;
}
