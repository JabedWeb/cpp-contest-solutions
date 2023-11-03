#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int N = 1e5 + 5;

int main() {
    int t; cin >> t;
    while (t--) {
        int x, y, k; cin >> x >> y >> k;
        int time = 0;

        // Determine the distances to the chest and key
        int distance_to_chest = abs(x);
        int distance_to_key = abs(y);

        // Go to the closer of the chest or key
        int first_target = min(distance_to_chest, distance_to_key);
        int second_target = max(distance_to_chest, distance_to_key);

        // Add the time to reach the first target
        time += first_target;

        if (first_target == distance_to_key) {
            // If the key is closer, pick it up, then go to the chest
            time += second_target - first_target;
        } else {
            // If the chest is closer, pick it up
            if (k >= second_target - first_target) {
                // If Monocarp can carry the chest to the key within k seconds
                time += second_target - first_target;
            } else {
                // If Monocarp cannot carry the chest all the way to the key
                time += k; // Carry the chest for k seconds
                time += (second_target - first_target - k); // Go to the key without the chest
                time += (second_target - first_target - k); // Return to the chest
            }
        }

        // Opening the chest takes 0 seconds, so it's not added to the time
        cout << time <<endl;
    }
    return 0;
}
