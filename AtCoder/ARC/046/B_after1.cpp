#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, a, b; cin >> n >> a >> b;

    if (n <= a) {
        puts("Takahashi");
    } else {
        if (a == b) {
            if (n % (a + 1) == 0) {
                puts("Aoki");
            } else {
                puts("Takahashi");
            }
        } else {
            if (a > b) {
                puts("Takahashi");
            } else {
                puts("Aoki");
            }
        }
    }
}