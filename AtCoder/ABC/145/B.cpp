#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n; ++i) {
        string s1;
        string s2;

        for (int k = 0; k <= i; ++k) {
            s1 += s[k];
        }

        for (int j = i+1; j < n; ++j) {
            s2 += s[j];
        }

        if (s1 == s2) {
            puts("Yes");
            return 0;
        }
    }

    puts("No");
}