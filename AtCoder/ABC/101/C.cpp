#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n, k; cin >> n >> k;

    int ans = 0;
    int right = 0;

    while (right < n) {
        if (ans == 0) {
            right += k; //最初の区間はk分
        } else {
            right += k - 1; //次の区間からはk-1分だけ広げられる
        }
        ++ans;
    }

    cout << ans << endl;
}