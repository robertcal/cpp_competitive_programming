#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string x; cin >> x;

    stack<char> sta;

    int sum = 0;

    for (int i = 0; i < x.size(); ++i) {
        if (sta.empty()) {
            sta.push(x[i]);
        } else {
            if (x[i] == 'S') {
                sta.push(x[i]);
            } else {
                char t = sta.top();
                if (t == 'S') {
                    sta.pop();
                    ++sum;
                } else {
                    sta.push(x[i]);
                }
            }
        }
    }

    cout << x.size() - sum * 2 << endl;
}