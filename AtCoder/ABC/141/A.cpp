#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string s; cin >> s;

    if (s == "Sunny") {
        puts("Cloudy");
        return 0;
    }

    if (s == "Cloudy") {
        puts("Rainy");
        return 0;
    }

    if (s == "Rainy") {
        puts("Sunny");
        return 0;
    }
}