#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int N; cin >> N;

    bool isFour = false;

    for (int i = 0; i < N; ++i) {
        string S; cin >> S;

        if (S == "Y") {
            isFour = true;
        }
    }

    if (isFour) {
        puts("Four");
    } else {
        puts("Three");
    }
}
