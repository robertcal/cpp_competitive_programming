#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

//素因数分解
vector<pair<ll, ll>> prime_factor(ll n) {
    vector<pair<ll, ll>> res;

    for (ll i = 2; i * i <= n; ++i) {
        if (n % i != 0) continue;

        ll num = 0;

        while (n % i == 0) {
            ++num;
            n /= i;
        }

        res.push_back(make_pair(i, num));
    }

    if (n != 1) res.push_back(make_pair(n, 1));

    return res;
}

int main() {

    int n, s; cin >> n >> s;

    auto factor = prime_factor(s);

    int sum = 0;
    for (auto f : factor) {
        sum += f.second;
    }

    if (sum < n) {
        puts("NO");
        return 0;
    }

    puts("YES");

    vector<int> array;
    int t = sum - n;
    for (auto f : factor) {
        if (t == 0) {
            for (int i = 0; i < f.second; ++i) {
                array.push_back(f.first);
            }
            continue;
        }

        if (t < f.second) {
            //一部
            int part = f.first;
            for (int i = 0; i < t; ++i) {
                part *= f.first;
            }
            array.push_back(part);
            for (int i = 0; i < f.second - t - 1; ++i) {
                array.push_back(f.first);
            }
            t = 0;
        } else {
            //全部
            int all = 1;
            for (int i = 0; i < f.second; ++i) {
                all *= f.first;
            }
            array.push_back(all);
            t -= f.second - 1;
        }
    }

    for (auto t : array) {
        cout << t << ' ';
    }
    cout << endl;

    for (int i = 2; i <= s; ++i) {
        if (__gcd(i, s) == 1) {
            cout << i << endl;
            return 0;
        }
    }
}