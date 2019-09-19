#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string c1, c2; cin >> c1 >> c2;

    if (c1[0] == c2[2] && c1[1] == c2[1] && c1[2] == c2[0]) {
        puts("YES");
    } else {
        puts("NO");
    }
}