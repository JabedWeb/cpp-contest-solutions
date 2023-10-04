#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int maX = -1;    
        int count = 0;  

        for(int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            if(a <= 10){
                if(b > maX){
                    maX = b;
                    count = i + 1; 
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
