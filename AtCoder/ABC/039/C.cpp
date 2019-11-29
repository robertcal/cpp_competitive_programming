#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int c;

    for (int i = 0; i < s.size()-6; ++i) {
        if (s[i] == s[i+1] && s[i+2] == 'B' && s[i+4] == 'B' && s[i+6] == 'B') {
            c = i;
            break;
        }
    }

    if (c == 0) {
        puts("Mi");
    }

    if (c == 2) {
        puts("Re");
    }

    if (c == 4) {
        puts("Do");
    }

    if (c == 5) {
        puts("Si");
    }

    if (c == 7) {
        puts("La");
    }

    if (c == 9) {
        puts("So");
    }

    if (c == 11) {
        puts("Fa");
    }
}