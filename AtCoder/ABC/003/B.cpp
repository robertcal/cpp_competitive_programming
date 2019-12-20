#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s, t; cin >> s >> t;

    char ok[7] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '@' && t[i] != '@' && s[i] != t[i]) {
            puts("You will lose");
            return 0;
        }

        if (s[i] == '@' && t[i] == '@') {
            continue;
        }

        if (s[i] == '@') {
            bool check = false;

            for (int j = 0; j < 7; ++j) {
                if (t[i] == ok[j]) {
                    check = true;
                }
            }

            if (!check) {
                puts("You will lose");
                return 0;
            }
        }

        if (t[i] == '@') {
            bool check = false;

            for (int j = 0; j < 7; ++j) {
                if (s[i] == ok[j]) {
                    check = true;
                }
            }

            if (!check) {
                puts("You will lose");
                return 0;
            }
        }
    }

    puts("You can win");
}