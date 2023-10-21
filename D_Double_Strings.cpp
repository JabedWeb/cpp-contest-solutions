#include <bits/stdc++.h>
using namespace std;
bool visited[1000005];

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        string count = "";
        bool flag= false;
        
        set<string> printed; // Set to keep track of printed strings
        for(int i = 0; i < n; i++){
            string s = v[i];
            for(int j = 0; j < n; j++){
                string t = v[j];
                for(int k = 0; k < n; k++){
                    if(s == t + v[k] && printed.find(s) == printed.end()){
                        // cout << "1" << " ";
                        // cout << s << " " << t << " " << v[k] << endl;
                        printed.insert(s); // Add the printed string to the set
                        flag = true;
                    }
                }
            }
            if(!flag) count += "0";
            else count += "1";
            flag = false;
        }
        cout << count << endl;
        // cout << endl;
        // cout << endl;
    }
}
