#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string n; cin >> n;

    if (n[0] == n[1] && n[1] == n[2] && n[2] == n[3]) {
        puts("SAME");
    } else {
        puts("DIFFERENT");
    }
}