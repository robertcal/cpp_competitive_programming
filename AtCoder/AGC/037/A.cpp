#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    vector<string> v;

    for (int i = 0; i < s.size(); ++i) {
        string t = "";

        for (int j = i; j < s.size(); ++j) {
            t += s[j];

            if (v.size() == 0) {
                v.push_back(t);
                break;

            }

            if (v[v.size() - 1] != t) {
                v.push_back(t);

                i = j;
                break;
            }
        }
    }

    cout << v.size() << endl;
}