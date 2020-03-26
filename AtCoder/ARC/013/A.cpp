#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    vector<int> a(3);
    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }

    vector<int> b(3);
    for (int i = 0; i < 3; ++i) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    int ans = 0;

    do {
        int sum = 1;

        for (int i = 0; i < 3; ++i) {
            if (a[i] < b[i]) {
                sum = 0;
                break;
            }

            sum *= a[i] / b[i];
        }

        ans = max(ans, sum);
    } while (next_permutation(b.begin(), b.end()));

    cout << ans << endl;
}