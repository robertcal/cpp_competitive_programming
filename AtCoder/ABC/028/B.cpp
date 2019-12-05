#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int count[6] = {};

    for (int i = 0; i < s.size(); ++i) {
        ++count[s[i] - 'A'];
    }

    for (int i = 0; i < 5; ++i) {
        cout << count[i] << ' ';
    }

    cout << count[5] << endl;
}