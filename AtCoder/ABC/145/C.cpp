#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<double> x(n);
    vector<double> y(n);

    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    vector<int> t;
    for (int i = 0; i < n; ++i) {
        t.push_back(i);
    }

    double sum = 0.0;

    do {
        for (int i = 0; i < n-1; ++i) {
            sum += sqrt((x[t[i+1]] - x[t[i]]) * (x[t[i+1]] - x[t[i]]) + (y[t[i+1]] - y[t[i]]) * (y[t[i+1]] - y[t[i]]));
        }

    } while (next_permutation(t.begin(), t.end()));

    double n_1 = 1.0;
    for (int i = 1; i <= n; ++i) {
        n_1 *= i;
    }

    double ans = sum / n_1;

    cout << setprecision(12) << ans << endl;
}