#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int n, a; cin >> n >> a;

    int r = n % 500;

    if (r <= a) {
        puts("Yes");
    } else {
        puts("No");
    }
}