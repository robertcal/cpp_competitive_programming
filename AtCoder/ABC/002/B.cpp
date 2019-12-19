#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string w; cin >> w;

    for (int i = 0; i < w.size(); ++i) {
        if (w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o') {
            continue;
        }

        cout << w[i];
    }

    cout << endl;
}