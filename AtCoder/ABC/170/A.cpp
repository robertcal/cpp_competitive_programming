#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    vector<int> x(5);
    for (int i = 0; i < 5; ++i) {
        cin >> x[i];

        if (x[i] == 0) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}