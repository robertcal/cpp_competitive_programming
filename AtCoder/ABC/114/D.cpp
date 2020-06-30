#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int cnt[110] = {};

void prime_factor(int n) {
    for (int i = 2; i * i <= n; ++i) {
        if (n % i != 0) continue;

        int num = 0;

        while (n % i == 0) {
            ++num;
            n /= i;
        }

        cnt[i] += num;
    }

    if (n != 1) cnt[n]++;
}

int main() {

    int n; cin >> n;

    for (int i = 1; i <= n; ++i) {
        prime_factor(i);
    }

//    for (int i = 0; i <= 100; ++i) {
//        cout << cnt[i] << endl;
//    }


    int cnt4 = 0;
    int cnt2 = 0;
    for (int i = 0; i < 110; ++i) {
        if (2 <= cnt[i] && cnt[i] <= 3) {
            cnt2++;
        }

        if (4 <= cnt[i]) {
            cnt4 += cnt[i] / 4;
        }

    }

    int ans = 0;

    ans += cnt2 * (cnt4 * (cnt4 - 1)) / 2;
    ans += cnt4 * ((cnt4 - 1) * (cnt4 - 2)) / 2;

    cout << ans << endl;
}