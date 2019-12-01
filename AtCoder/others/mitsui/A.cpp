#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int m1, d1; cin >> m1 >> d1;
    int m2, d2; cin >> m2 >> d2;

    if (m1 != m2 && d2 == 1) {
        puts("1");
    } else {
        puts("0");
    }
}