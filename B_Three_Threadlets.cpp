#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while(t--) {
        vector<ll> threads(3);

        for(int i = 0; i < 3; i++) {
            cin >> threads[i];
        }
        bool flag = false;
    
        ll smallThread = min({threads[0], threads[1], threads[2]});
        int operation = 0;

        for(int i = 0; i < 3; i++) {
            
            while(threads[i] > smallThread && operation <= 3) {
                threads[i] -= smallThread;
                operation++;
            }

            if(threads[i] != smallThread) {
                operation = 4;
                break;
            }
        }

        if(operation <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
