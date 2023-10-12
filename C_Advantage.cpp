#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> arr1(arr);
        sort(arr1.begin(), arr1.end());

        //    for(int i = 0; i < n; i++) {
        //     if(n-1 == i) {
        //         cout << arr1[n-1] - arr1[n-2] << " ";
        //     } else {
        //         cout << arr1[i] - arr1[n-1] << " ";
        //     }
        // }

        for (int i = 0; i < n; i++) {
           
            int index_in_arr1 = find(arr1.begin(), arr1.end(), arr[i]) - arr1.begin();

            if (index_in_arr1 == n - 1)
                cout << arr1[n - 1] - arr1[n - 2] << " ";
            else
                cout << arr1[index_in_arr1] - arr1[n - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}
