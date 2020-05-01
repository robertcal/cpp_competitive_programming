#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    ll n = s.length();

    vector<ll> val(2019, 0);
    ll fac = 1;
    ll cur = 0;
    //なぜ行う？
    //右からn文字目をs[n]として
    //s[a] と s[b] を 2019 で割った余りが等しい場合に答えの組み合わせが増えていく
    //s[b]がb=0の場合も含まれる（文字列の一番右まで見た場合）ため、s[0]の時の余りも組み合わせの一つとして入れておく
    val[cur]++;

    for (ll i = 0; i < n; ++i) {
        ll add = s[n - 1 - i] - '0'; //後ろから見ていく
        cur = (cur + fac * add) % 2019;
        fac = (fac * 10) % 2019; //10倍していく方も事前に2019で割っておいて良い
        val[cur]++;
    }

    ll ans = 0;
    for (ll i = 0; i < (ll)val.size(); ++i) {
        ans += val[i] * (val[i] - 1) / 2; //nC2を計算
    }

    cout << ans << endl;
}