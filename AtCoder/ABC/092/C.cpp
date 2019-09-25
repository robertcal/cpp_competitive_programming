#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    vector<int> a(n+2);

    a[0] = 0;
    a[n+1] = 0;

    int s = 0;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        s += abs(a[i] - a[i-1]);
    }

    s += abs(a[n+1] - a[n]);

    for (int i = 1; i <= n; ++i) {
        cout << s - (abs(a[i+1] - a[i]) + abs(a[i] - a[i-1])) + abs(a[i+1] - a[i-1]) << endl;
    }
}