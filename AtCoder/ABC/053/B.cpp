#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    int start;
    int end;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'A') {
            start = i;
            break;
        }
    }

    for (int i = s.size()-1; i >= 0; --i) {
        if (s[i] == 'Z') {
            end = i;
            break;
        }
    }

    cout << end - start + 1 << endl;
}