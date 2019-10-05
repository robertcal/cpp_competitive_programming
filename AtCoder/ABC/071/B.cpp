#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int alpha[26] = {0};

    for (int i = 0; i < s.size(); ++i) {
        int t = s[i] - 'a';
        if (alpha[t] == 0) {
            alpha[t]++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (alpha[i] == 0) {
            cout << char('a' + i) << endl;
            return 0;
        }
    }

    puts("None");
}