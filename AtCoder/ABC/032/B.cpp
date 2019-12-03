#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;
    int k; cin >> k;

    set<string> se;

    if (s.size() < k) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < s.size()-k+1; ++i) {
        string st;

        for (int j = 0; j < k; ++j) {
            st += s[i + j];
        }

        se.insert(st);
    }

    cout << se.size() << endl;
}