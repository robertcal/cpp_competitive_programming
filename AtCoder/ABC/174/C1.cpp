#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string k; cin >> k;
    int k_int = stoi(k);

    map<int, int> mp;
    for (int i = 0; i <= 9; ++i) {
        mp[i] = k_int * i;
    }

    vector<int> sum(10000000, 0);
    for (int i = 0; i <= 9; ++i) {
        if (mp[i] % 10 == 7) {
            int tmp = mp[i];
            int j = 0;
            while (tmp > 0) {
                sum[j] += tmp % 10;
                tmp /= 10;
                j++;
            }
        }
    }

    for (int i = 1; i < sum.size(); ++i) {
        for (int j = 0; j <= 9; ++j) {
            if ((mp[j] + sum[i]) % 10 == 7) {
                int tmp = mp[j];
                int agari = 0;
                for (int l = 0; l < to_string(mp[i]).length() + 1; ++l) {
                    sum[i + l] += tmp;
                    if (sum[i + l] >= 10) {
                        sum[i + l] %= 10;
                        agari = (sum[i + l] / 10);
                    } else {
                        agari = 0;
                    }
                    tmp /= 10;
                }
            }
        }
    }
}