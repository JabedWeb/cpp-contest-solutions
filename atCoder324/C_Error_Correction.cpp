#include <bits/stdc++.h>
using namespace std;

bool checkEqual(string a, string b) {
    return a == b;
}

bool checkInsert(string a, string b) {
    if(a.size() != b.size() + 1) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i] && a.substr(0, i) + a.substr(i+1) == b) return true;
    }
    return false;
}

bool checkDelete(string a, string b) {
    if(a.size() != b.size() - 1) return false;
    for(int i = 0; i < b.size(); i++) {
        if(a[i] != b[i] && a.substr(0, i) + b[i] + a.substr(i) == b) return true;
    }
    return false;
}

bool checkReplace(string a, string b) {
    if(a.size() != b.size()) return false;
    int countDiff = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) countDiff++;
        if(countDiff > 1) return false;
    }
    return countDiff == 1;
}

int main() {
    int n;cin >> n;
    string Tprime, S;
    cin >> Tprime;
    vector<int> Indices;

    for(int i = 1; i <= n; i++) {
        cin >> S;
        if(checkEqual(Tprime, S) || checkInsert(Tprime, S) || checkDelete(Tprime, S) || checkReplace(Tprime, S)) {
            Indices.push_back(i);
        }
    }
    cout << Indices.size() << endl;
    for(int i = 0; i < Indices.size(); i++) {
        cout << Indices[i] << (i < Indices.size() - 1 ? " " : "\n");
    }

    return 0;
}
