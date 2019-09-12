#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;
    string s = to_string(n);

    int f = 0;
    for (int i = 0; i < s.size(); ++i) {
        f += s[i] - '0';
    }

    if (n % f == 0) {
        puts("Yes");
    } else {
        puts("No");
    }
}