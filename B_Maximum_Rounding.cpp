#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;
int main(){
 
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
 
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;
        const int n = s.size();
        int last = n;
        for(int i = n - 1; i >= 0; i--){
            if (s[i] >= '5'){
                int j = i - 1;
                while(j >= 0 && s[j] == '9') j--;
                if (j < 0){
                    s = "1" + string(n, '0');
                    break;
                }
                while(last - 1 > j){
                    s[--last] = '0';
                }
                s[j] += 1;
                i = j + 1;
            }
        }
        cout << s << '\n';
    }
 
}