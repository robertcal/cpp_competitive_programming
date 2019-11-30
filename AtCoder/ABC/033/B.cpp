#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int sum = 0;

    vector<pair<string, int>> c(n);
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        int p; cin >> p;
        c[i] = make_pair(s, p);

        sum += p;
    }

    for (int i = 0; i < n; ++i) {
        if (sum / 2 < c[i].second) {
            cout << c[i]. first << endl;
            return 0;
        }
    }

    puts("atcoder");
}