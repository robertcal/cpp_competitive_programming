#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    char b; cin >> b;

    if (b == 'A') {
        cout << 'T' << endl;
        return 0;
    }

    if (b == 'T') {
        cout << 'A' << endl;
        return 0;
    }

    if (b == 'C') {
        cout << 'G' << endl;
        return 0;
    }

    if (b == 'G') {
        cout << 'C' << endl;
        return 0;
    }
}