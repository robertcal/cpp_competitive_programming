#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;

    int count = 0;

    for (int i = 0; i < 15; ++i) {
        if (S[i] == 'x') {
            ++count;
        }
    }

    if (count <= 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}