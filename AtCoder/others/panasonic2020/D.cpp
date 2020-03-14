#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

vector<string> m;

vector<string> res;

void f(int m_size, int n, int limit, string s) {
    if (s.length() == limit && n != 0) {
        return;
    }

    if (n == 0) {
        res.push_back(s);
        return;
    }

    //文字使う場合
    f(m_size, n, limit, s + "a");

    //文字使わない場合
    f(m_size, n-1, limit, (s + m[m_size - n]));
}

int main() {

    int n; cin >> n;

    vector<string> ans;
    string s = "";
    for (int i = 0; i < n; ++i) {
        s += "a";
    }
    ans.push_back(s);

    for (int i = 1; i < n; ++i) {
        res.clear();
        string t = "a";

        for (int j = 0; j < i; ++j) {
            m.push_back(to_string('a' + j + 1));
        }

        f(i, i, n, t);

        for (auto re : res) {
            ans.push_back(re);
        }
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << endl;
    }
}