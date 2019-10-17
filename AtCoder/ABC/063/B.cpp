#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int c[26] = {0};

    for (int i = 0; i < s.size(); ++i) {
        int num = s[i] - 'a';

        if (c[num] > 0) {
            puts("no");
            return 0;
        }

        c[num]++;
    }

    puts("yes");
}