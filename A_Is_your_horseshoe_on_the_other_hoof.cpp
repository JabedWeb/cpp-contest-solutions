// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 4;
//     long long int count[4] = {0};
//     long long int arr[4];

//     for (int i = 0; i < n; i++) {
//         long long int value;
//         cin >> value;
//         arr[i] = value;
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count[i]++;
//             }
//         }
//     }

//     long long int missing = 0;

//     for (int i = 0; i < n; i++) {
//         if((count[0]==1 && count[1]==1) || (count[0]==1 && count[2]==1) ){
//             missing=2;
//             break;
//         }
//         else if (missing < count[i]) {
//             missing = count[i];
//         }
//     }
//     cout <<endl;
//     cout << missing;

//     return 0;
// }

//shortcut with set

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    set<int> colors;
    
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        colors.insert(value);
    }

    int missing_colors = 4 - colors.size();
    cout << missing_colors;

    return 0;
}
