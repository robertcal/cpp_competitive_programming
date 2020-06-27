#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

const int MAX = 15001000;
bool IsPrime[MAX];
int MinFactor[MAX];
vector<int> preprocess(int n = MAX) {
    vector<int> res;
    for (int i = 0; i < n; ++i) IsPrime[i] = true, MinFactor[i] = -1;
    IsPrime[0] = false; IsPrime[1] = false;
    MinFactor[0] = 0; MinFactor[1] = 1;
    for (int i = 2; i < n; ++i) {
        if (IsPrime[i]) {
            MinFactor[i] = i;
            res.push_back(i);
            for (int j = i*2; j < n; j += i) {
                IsPrime[j] = false;
                if (MinFactor[j] == -1) MinFactor[j] = i;
            }
        }
    }
    return res;
}

vector<pair<int,int> > prime_factor(int n) {
    vector<pair<int,int> > res;
    while (n != 1) {
        int prime = MinFactor[n];
        int exp = 0;
        while (MinFactor[n] == prime) {
            ++exp;
            n /= prime;
        }
        res.push_back(make_pair(prime, exp));
    }
    return res;
}

int main() {

    ll n; cin >> n;

    preprocess();

    ll ans = 0;
    for (ll i = 1; i <= n; ++i) {

        auto p = prime_factor(i);

        ll cnt = 1;
        for (auto t : p) {
            cnt *= t.second + 1;
        }
        ans += i * cnt;
    }

    cout << ans << endl;
}
