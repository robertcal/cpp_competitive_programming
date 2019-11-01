#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    int a_1 = 0;
    int a_2 = 0;
    int a_4 = 0;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (a % 4 == 0) {
            ++a_4;
        } else if (a % 2 == 0) {
            ++a_2;
        } else {
            ++a_1;
        }
    }

    if (a_4 >= a_1 || (a_4 + 1 == a_1 && a_2 == 0)) {
        puts("Yes");
    } else {
        puts("No");
    }
}