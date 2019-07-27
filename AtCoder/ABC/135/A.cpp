#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int A, B; cin >> A >> B;

    if ((A + B) % 2 == 0) {
        cout << (A + B) / 2 << endl;
    } else {
        puts("IMPOSSIBLE");
    }
}