#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int minGroups(vector<int>& numbers) {
    unordered_map<int, int> bitCounts;
    int maxCount = 0;

    for (int num : numbers) {
        int mask = 1;
        for (int i = 0; i < 31; ++i) {
            if (num & mask) bitCounts[i]++;
            mask <<= 1;
        }
    }

    for (auto& count : bitCounts) {
        maxCount = max(maxCount, count.second);
    }

    return maxCount;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);

        for (int& num : numbers) {
            cin >> num;
        }

        cout << minGroups(numbers) << endl;
    }

    return 0;
}
