#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string sa, sb, sc; cin >> sa >> sb >> sc;

    int a = 0;
    int b = 0;
    int c = 0;

    string next = "a";

    while (a <= sa.size() && b <= sb.size() && c <= sc.size()) {
        if (next == "a") {
            next = sa[a];
            ++a;
        }

        if (next == "b") {
            next = sb[b];
            ++b;
        }

        if (next == "c") {
            next = sc[c];
            ++c;
        }
    }

    if (a > sa.size()) {
        puts("A");
        return 0;
    }

    if (b > sb.size()) {
        puts("B");
        return 0;
    }

    if (c > sc.size()) {
        puts("C");
        return 0;
    }
}