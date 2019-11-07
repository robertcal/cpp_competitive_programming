#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n % 2 == 0) {
        //偶数
        for (int i = n-1; i >= 0; i -= 2) {
            cout << a[i] << ' ';
        }

        for (int i = 0; i <= n-2; i += 2) {
            if (i != n-2) {
                cout << a[i] << ' ';
            } else {
                cout << a[i];
            }
        }
    } else {
        //奇数
        for (int i = n-1; i >= 0; i -= 2) {
            cout << a[i] << ' ';
        }

        for (int i = 1; i <= n-2; i += 2) {
            if (i != n-2) {
                cout << a[i] << ' ';
            } else {
                cout << a[i];
            }
        }
    }
}