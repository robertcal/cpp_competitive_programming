#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    if (n <= 59) {
        puts("Bad");
    } else if (60 <= n && n <= 89) {
        puts("Good");
    } else if (90 <= n && n <= 99) {
        puts("Great");
    } else {
        puts("Perfect");
    }
}