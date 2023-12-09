#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    stack<int> lowerCasePositions, upperCasePositions;
    string result = "";

    for (char ch : s) {
        if (ch == 'b') {
            if (!lowerCasePositions.empty()) {
                result[lowerCasePositions.top()] = '\0'; 
                lowerCasePositions.pop();
            }
        } else if (ch == 'B') {
            if (!upperCasePositions.empty()) {
                result[upperCasePositions.top()] = '\0'; 
                upperCasePositions.pop();
            }
        } else {
            result += ch;
            if (islower(ch)) {
                lowerCasePositions.push(result.size() - 1);
            } else if (isupper(ch)) {
                upperCasePositions.push(result.size() - 1);
            }
        }
    }


    result.erase(remove(result.begin(), result.end(), '\0'), result.end());
    cout << result << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}
