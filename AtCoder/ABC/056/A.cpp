#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    char a, b; cin >> a >> b;

    if (a == 'H') {
        cout << b << endl;
    } else {
        if (b == 'H') {
            cout << 'D' << endl;
        } else {
            cout << 'H' << endl;
        }
    }
}