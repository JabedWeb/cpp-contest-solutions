#include <iostream>
#include <vector>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int findGroups(std::vector<int>& ratings, int n) {
    int groups = 0;
    std::vector<bool> visited(n, false);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            groups++;
            for (int j = i + 1; j < n; ++j) {
                if (!visited[j] && gcd(ratings[i], ratings[j]) > 1) {
                    visited[j] = true;
                }
            }
        }
    }

    return groups;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> ratings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> ratings[i];
    }

    int groups = findGroups(ratings, n);
    std::cout << groups << std::endl;

    return 0;
}
