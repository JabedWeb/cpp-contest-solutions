#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }

    vector<string> s(n);
    vector<int> scores(n, 0);

    
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        for (int j = 0; j < m; ++j) {
            if (s[i][j] == 'o') {
                scores[i] += v[j];
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        int scores_needed = 0;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int diff = scores[j] - scores[i] + (j - i) + 1;
                scores_needed = max(scores_needed, diff);
            }
        }

        vector<int> unsolved_scores;
        for (int j = 0; j < m; ++j) {
            if (s[i][j] == 'x') {
                unsolved_scores.push_back(v[j]);
            }
        }

        sort(unsolved_scores.rbegin(), unsolved_scores.rend());
        
        int problems_needed = 0;
        int sum = 0;
        while (problems_needed < unsolved_scores.size() && sum < scores_needed) {
            sum += unsolved_scores[problems_needed];
            problems_needed++;
        }

        cout << problems_needed << endl;
    }

    return 0;
}
