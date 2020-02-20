#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, k; cin >> n >> k;

    ll sum = 0;

    //3つ違う
    sum += (k - 1) * (n - k) * 6;

    //2つ同じ
    sum += (k - 1) * 3;
    sum += (n - k) * 3;

    //3つ同じ
    sum += 1;

    double ans = (double)sum;
    for (int i = 0; i < 3; ++i) {
        ans /= (double)n;
    }


    cout << fixed << setprecision(15) << ans << endl;
}