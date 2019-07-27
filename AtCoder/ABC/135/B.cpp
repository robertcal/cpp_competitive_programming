#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> p(N);
    for (int i = 0; i < N; ++i) {
        cin >> p[i];
    }

    vector<int> s(N);
    s = p;
    sort(s.begin(), s.end());

    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        if (p[i] != s[i]) {
            ++cnt;
        }
    }

    if (cnt == 0 || cnt == 2) {
        puts("YES");
    } else {
        puts("NO");
    }
}