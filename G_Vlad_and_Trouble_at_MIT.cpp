#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countThickWalls(int n, const vector<int>& parent, const string& types) {
    int thickWalls = 0;
    for (int i = 2; i <= n; ++i) {
        if ((types[i - 1] == 'P' && types[parent[i - 2] - 1] == 'S') || 
            (types[i - 1] == 'S' && types[parent[i - 2] - 1] == 'P')) {
            thickWalls++;
        }
    }
    return thickWalls;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> parent(n - 1);
        for (int& p : parent) {
            cin >> p;
        }
        string types;
        cin >> types;

        if(countThickWalls(n, parent, types) <2){
            cout << 1 << endl;
        }else{
           cout <<countThickWalls(n, parent, types) << endl;
        }
    }
    return 0;
}
