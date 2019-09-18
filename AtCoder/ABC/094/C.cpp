#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    vector<int> y(n);
    y = x;
    sort(y.begin(), y.end());

    for (int i = 0; i < n; ++i) {
        if (x[i] < y[n/2]) {
            cout << y[n/2] << endl;
        } else {
            cout << y[(n/2)-1] << endl;
        }
    }
}