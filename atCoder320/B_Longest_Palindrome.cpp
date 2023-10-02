#include <bits/stdc++.h>
using namespace std;

int main() {
 
    string s;
    cin >> s;

    int maxLength = 1;
    for (int i = 0; i < s.size(); i++) {
        for (int len = 1; len <= s.size() - i; len++) {
          
            string S = s.substr(i, len);
            string T = S;

            reverse(T.begin(), T.end());
            
            if (S == T) {
                maxLength = max(maxLength, len);
            }
        }
    }

    cout << maxLength << endl;

    return 0;
}
