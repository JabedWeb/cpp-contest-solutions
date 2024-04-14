#include <iostream>
#include <cmath> // for ceil()

using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    if (k >= n) {
        // If by the building time, we already have enough cakes
        cout << "NO" << endl;
        return 0;
    }
    // Calculate the number of batches and time needed with one oven
    int batches_one_oven = (n + k - 1) / k; // ceil(n/k)
    int total_time_one_oven = batches_one_oven * t;

    // Calculate cakes baked by the time the second oven is built
    int batches_during_build = d / t;
    int cakes_while_building = batches_during_build * k;


    // Calculate remaining cakes needed after building the second oven
    int remaining_cakes = n - cakes_while_building;
    // Now two ovens are baking, so each cycle takes `t` minutes and produces `2*k` cakes
    int batches_two_ovens = (remaining_cakes + (2 * k) - 1) / (2 * k); // ceil(remaining_cakes / (2*k))
    int time_two_ovens = batches_two_ovens * t + d;

    // Output if it's beneficial to build the second oven
    if (time_two_ovens < total_time_one_oven) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
