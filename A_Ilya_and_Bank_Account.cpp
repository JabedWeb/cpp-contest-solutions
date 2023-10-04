#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
    if (n >= 0)cout << n << endl;
     else {
        string s = to_string(n);
        int opt1 = stoi(s.substr(0, s.size()-1));
        int opt2 = stoi(s.substr(0, s.size()-2) + s[s.size()-1]);
        cout << max(opt1, opt2) << endl;
    }
    return 0;
}
