#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    map<int, int> ma;
    for (int i = 0; i < 10; ++i) {
        int b; cin >> b;

        ma[b] = i;
    }

    int n; cin >> n;

    //変換後、変換前
    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        int tmp = a;
        int t = 0;
        int j = 1;
        while (tmp > 0) {
            t += ma[(tmp % 10)] * j;

            tmp /= 10;
            j *= 10;
        }

        v.push_back(make_pair(t, a));
    }

    sort(v.begin(), v.end());

    for (auto t : v) {
        cout << t.second << endl;
    }
}