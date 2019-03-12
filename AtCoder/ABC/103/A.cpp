#include <bits/stdc++.h>

using namespace std;

int main() {

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    int max_a, min_a;
    max_a = max({a1, a2, a3});
    min_a = min({a1, a2, a3});

    cout << max_a - min_a << endl;
}