#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s, t; cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());

    if (s < t) {
        puts("Yes");
    } else {
        puts("No");
    }
}