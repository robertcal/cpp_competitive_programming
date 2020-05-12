#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

bool check(vector<pair<int, int>> a) {
    int h = 0;
    for (auto p : a) {
        int d = h + p.first;
        if (d < 0) return false;
        h += p.second;
    }
    return true;
}

int main() {

    int n; cin >> n;

    vector<pair<int, int>> l;
    vector<pair<int, int>> r;

    int total = 0;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];

        int h = 0;
        int d = 0;
        for (char c : s[i]) {
            if (c == '(') {
                ++h;
            } else {
                --h;
            }
            d = min(d, h);
        }

        if (h >= 0) {
            l.push_back(make_pair(d, h));
        } else {
            r.push_back(make_pair(d - h , -h)); //右から見た値にする
        }

        total += h;
    }

    sort(l.rbegin(), l.rend());
    sort(r.rbegin(), r.rend());

    if (check(l) && check(r) && total == 0) {
        puts("Yes");
    } else {
        puts("No");
    }
}