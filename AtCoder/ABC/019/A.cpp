#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    vector<int> a(3);

    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << a[1] << endl;
}