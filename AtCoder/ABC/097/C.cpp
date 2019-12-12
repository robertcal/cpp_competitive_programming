#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    int k; cin >> k;

    vector<string> v;

    int n = s.size();

    for (int i = 1; i <= min(k, n); ++i) { //何文字か。最大でもk文字以下になる
        for (int j = 0; j <= s.size()-i; ++j) { //何文字目からか
            string st = "";
            for (int l = 0; l < i; ++l) {
                if (j + l > s.size() - 1) {
                    break;
                } else {
                    st += s[j+l];
                }
            }

            auto itr = find(v.begin(), v.end(), st);
            if (itr == v.end()) {
                v.push_back(st);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v[k - 1] << endl;
}