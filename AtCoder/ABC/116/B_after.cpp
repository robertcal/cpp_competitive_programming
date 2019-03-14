#include <bits/stdc++.h>

using namespace std;

int main() {

    int s; cin >> s;
    set<int> se;

    se.insert(s);

    for (int i = 2; i < 1000000; ++i) {
        if (s % 2 == 0) {
            s = s / 2;
        } else {
            s = 3 * s + 1;
        }

        if (se.count(s) == 1) {
            cout << i << endl;
            return 0;
        }

        se.insert(s);
    }
}
