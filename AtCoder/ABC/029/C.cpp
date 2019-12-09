#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

void pass(int rest, string s) {
    if (rest == 0) {
        cout << s << endl;
        return; //このreturnが必要！！！
    }

    for (char i = 'a'; i <= 'c'; ++i) {
        pass(rest - 1, s + i);
    }
}

int main() {

    int n; cin >> n;

    pass(n, "");
}