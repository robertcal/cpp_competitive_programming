#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> c(n);
    vector<int> s(n);
    vector<int> f(n);

    for (int i = 0; i < n-1; ++i) {
        cin >> c[i] >> s[i] >> f[i];
    }

    for (int i = 0; i < n-1; ++i) {
        int sum = c[i] + s[i];

        for (int j = i+1; j < n-1; ++j) {
            if (sum <= s[j]) {
                sum = c[j] + s[j];
            } else {
                for (int k = 0; k <= f[j]; ++k) {
                    if ((sum + k) % f[j] == 0) {
                        sum += k + c[j];
                        break;
                    }
                }
            }
        }

        cout << sum << endl;
    }

    cout << 0 << endl;
}