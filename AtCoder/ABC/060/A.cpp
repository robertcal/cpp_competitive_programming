#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string a, b, c; cin >> a >> b >> c;

    if (a[a.size()-1] == b[0] && b[b.size()-1] == c[0]) {
        puts("YES");
    } else {
        puts("NO");
    }
}