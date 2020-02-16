#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int a, b, c; cin >> a >> b >> c;

    set<int> se;
    se.insert(a);
    se.insert(b);
    se.insert(c);


    if (se.size() == 2) {
        puts("Yes");
    } else {
        puts("No");
    }
}