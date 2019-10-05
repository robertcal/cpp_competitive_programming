#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int x, a, b; cin >> x >> a >> b;

    if (abs(x-a) < abs(x-b)) {
        puts("A");
    } else {
        puts("B");
    }
}