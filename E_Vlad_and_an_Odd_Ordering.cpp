#include <iostream>
using namespace std;

int findKthCard(int n, int k) {
    int oddCount = (n + 1) / 2; // Count of odd numbers up to n
    if (k <= oddCount) {
        return 2 * k - 1; // k-th odd number
    }
    // Adjust k to account for the odd numbers already placed
    k -= oddCount;
    // Now find which even set (twice an odd, thrice an odd, etc.) k falls into
    // For even sets, every odd number will be counted (n/2), so just find the even multiple
    return 2 * k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << findKthCard(n, k) << endl;
    }
    return 0;
}
