#include <bits/stdc++.h>

using namespace std;

class LagrangeInterpolationFormula {

public:
    int n, value;
    double x[100], y[100];
    double ans = 0;

    LagrangeInterpolationFormula() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
        cin >> value;
    }
    
    void solve() {

        for (int i = 0; i < n; i++) {
            double y_value = y[i];
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    y_value = y_value * (value - x[j]) / (x[i] - x[j]);
                }
            }
            ans += y_value;
        }
        cout <<ans<<endl;
    }

};

int main() {
    LagrangeInterpolationFormula x = LagrangeInterpolationFormula();
    x.solve();
}
