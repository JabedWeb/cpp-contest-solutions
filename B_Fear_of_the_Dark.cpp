#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

double dist(ll x1, ll y1, ll x2, ll y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

bool isIlluminated(double r, double d1, double d2, double dOP) {
    double maxD = 2.0 * r;
    if(d1 <= r && d2 <= r) return true;
    if(d1 <= r) return dOP - d2 <= r;
    if(d2 <= r) return dOP - d1 <= r;
    return d1 + d2 <= dOP + maxD;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll Px, Py, Ax, Ay, Bx, By;
        cin >> Px >> Py >> Ax >> Ay >> Bx >> By;

        double dOA = dist(0, 0, Ax, Ay);
        double dOB = dist(0, 0, Bx, By);
        double dPA = dist(Px, Py, Ax, Ay);
        double dPB = dist(Px, Py, Bx, By);
        double dOP = dist(0, 0, Px, Py);

        double l = 0, r = dOP, ans = dOP;
        for(int i = 0; i < 100; ++i) {
            double mid = (l + r) / 2.0;
            if(isIlluminated(mid, dOA, dPA, dOP) || isIlluminated(mid, dOB, dPB, dOP)) {
                ans = mid;
                r = mid;
            } else {
                l = mid;
            }
        }
        printf("%.10f\n", ans);
    }
    return 0;
}
