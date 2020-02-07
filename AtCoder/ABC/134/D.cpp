#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> b(n, 0);

    for (int i = n-1; i >= n/2; --i) {
        b[i] = a[i];
    }

    for (int i = n/2 - 1; i >= 0; --i) {
        int sum = 0;

        for (int j = i+1; j <= n; j += i+1) {
            sum += b[j-1];
        }

        if (sum % 2 == a[i]) {
            b[i] = 0;
        } else {
            b[i] = 1;
        }
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if (b[i] == 1) {
            ++sum;
        }
    }

    cout << sum << endl;
    for (int i = 0; i < n; ++i) {
        if (b[i] == 1) {
            cout << i + 1 << ' ';
        }
    }

    cout << endl;
}