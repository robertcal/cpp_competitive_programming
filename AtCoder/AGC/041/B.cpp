#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    ll n, m, v, p; cin >> n >> m >> v >> p;

    vector<ll> a(n);
    map<ll, ll, greater<ll>> ma;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        ma[a[i]]++;
    }

    ll border = 0;
    ll border_cnt = 0;
    ll border_upper_cnt = 0;

    ll tmp_cnt = 0;
    for (auto t : ma) {
        tmp_cnt += t.second;
        if (tmp_cnt >= p) {
            border = t.first;
            border_cnt = t.second;
            break;
        } else {
            border_upper_cnt = tmp_cnt;
        }
    }

    //ボーダーに影響する場合
    if (n - border_cnt < v) {
        cout << border_upper_cnt + border_cnt << endl;
        return 0;
    }

    //ボーダーに影響しない場合
    ll ans = border_upper_cnt + border_cnt;

    ll in_p_cnt = p - border_upper_cnt;
    ll new_v = v - border_upper_cnt;
    ll border_and_lower_cnt = n - border_upper_cnt;
    ll border_lower_cnt = n - border_upper_cnt - border_cnt;

    ll new_new_v = new_v - in_p_cnt;

    ll sum_cnt = 0;

    for (auto t : ma) {
        if (t.first >= border) {
            continue;
        }

//        if (in_p_cnt == 1) {
//            if (t.first + m >= border) {
//                ans += t.second;
//            }
//        } else {
            //1個以上ボーダーに余裕がある
            if (t.first + m >= border) {
                sum_cnt += t.second;
                if (sum_cnt < new_new_v) {
                    ans += t.second;
                }
            }
//        }
    }

    cout << ans << endl;
}