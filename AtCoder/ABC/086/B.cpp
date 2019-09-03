#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    int a, b; cin >> a >> b;

    string s = to_string(a) + to_string(b);

    for (int i = 1; i <= 1000; ++i) {
        if (i * i == stoi(s)) {
            puts("Yes");
            return 0;
        }
    }

    puts("No");
}