#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;
    int n; cin >> n;

    int c = 0;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            ++c;

            if (c == n) {
                cout << s[i] << s[j] << endl;
                return  0;
            }
        }
    }
}