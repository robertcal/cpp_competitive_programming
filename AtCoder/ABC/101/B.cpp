#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string N; cin >> N;

    int S = 0;

    for (int i = 0; i < N.size(); ++i) {
        S += N[i] - '0';
    }

    if (stoi(N) % S == 0) {
        puts("Yes");
    } else {
        puts("No");
    }
}
