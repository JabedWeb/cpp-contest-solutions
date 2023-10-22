#include <bits/stdc++.h>
using namespace std;
 
 
bool palindrome(string s, int k) {
    vector<int> count(26, 0);
 
    for (char c : s) {
        count[c - 'a']++;
    }
 
    int oddCount = 0;
    for (int i : count) {
        if (i % 2 != 0) {
            oddCount++;
        }
    }
    
    // all odd numbers delete to make palindrome
    //except for one(like madam)
    int deleted = max(0, oddCount - 1);
    // cout <<oddCount << endl;
    // cout << deleted << endl;
 
    if (deleted > k) return false;
    return true;
 
    
    // int diff = k - deleted;
    // return (diff < s.size());
}
 
int main() {
    int t, n, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cin >> s;
        if (palindrome(s, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}