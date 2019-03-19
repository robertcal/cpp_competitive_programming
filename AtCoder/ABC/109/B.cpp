#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    set<string> se;

    char back;

    for (int i = 0; i < N; ++i) {
        string w; cin >> w;

        if (i == 0) {
            back = w.front();
        }

        if (back != w.front()) {
            cout << "No" << endl;
            return 0;
        }

        if (se.count(w) == 1) {
            cout << "No" << endl;
            return 0;
        }

        back = w.back();
        se.insert(w);
    }

    cout << "Yes" << endl;
}