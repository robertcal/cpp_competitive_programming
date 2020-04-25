#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, a, b; cin >> n >> a >> b;

    int turn = 0;
    while (n > 0) {
        if (turn == 0) {
            if (n - a <= 0) {
                puts("Ant");
                return 0;
            }
            n -= a;
        } else {
            if (n - b <= 0) {
                puts("Bug");
                return 0;
            }
            n -= b;
        }
        turn = 1 - turn;
    }
}