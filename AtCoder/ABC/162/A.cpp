#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string n; cin >> n;

    bool seven = false;

    for (int i = 0; i < n.length(); ++i) {
        if (n[i] == '7') seven = true;
    }

    if (seven) {
        puts("Yes");
    } else {
        puts("No");
    }
}