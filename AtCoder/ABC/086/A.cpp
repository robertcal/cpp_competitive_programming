#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int a, b; cin >> a >> b;

    if ((a * b) & 1) {
        puts("Odd");
    } else {
        puts("Even");
    }
}