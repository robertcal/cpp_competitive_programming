#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, m; cin >> n >> m;

    vector<string> s(n);
    vector<string> r_s(n);

    for (int i = 0; i < n; ++i) {
        string st; cin >> st;
        s[i] = st;
        reverse(st.begin(), st.end());
        r_s[i] = st;
    }

    vector<pair<int, int>> diff_pa;
    vector<pair<int, int>> same_pa;

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (s[i] == r_s[j]) {
                if (i != j) {
                    diff_pa.push_back(make_pair(i, j));
                } else {
                    same_pa.push_back(make_pair(i, i));
                }
            }
        }
    }

    int length = diff_pa.size() * 2 * m;
    if (same_pa.size() >= 1) {
        length += m;
    }
    cout << length << endl;

    if (length > 0) {
        string res;
        for (auto t : same_pa) {
            res += s[t.first];
            break;
        }

        for (auto t : diff_pa) {
            res = s[t.first] + res + s[t.second];
        }

        cout << res << endl;
    }
}