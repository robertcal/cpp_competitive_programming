#include <bits/stdc++.h>

using namespace std;

int main() {

    int s; cin >> s;

    int a[1000000];
    int ans = 0;
    a[0] = s;


    for (int i = 1; i <= 1000000; ++i) {
        if (a[i-1] % 2 == 0) {
            a[i] = a[i-1] / 2;
        } else {
            a[i] = 3 * a[i-1] + 1;
        }

        for (int j = 0; j < i; ++j) {
            if (a[j] == a[i]) {
                ans = i + 1;
                break;
            }
        }

        if (ans > 0) {
            break;
        }
    }

    cout << ans << endl;
}
