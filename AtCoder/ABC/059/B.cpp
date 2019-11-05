#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string a, b; cin >> a >> b;

    int size = a.size() > b.size() ? a.size() : b.size();

    ostringstream aa;
    aa << setw(size) << setfill('0') << a;
    string A(aa.str());

    ostringstream bb;
    bb << setw(size) << setfill('0') << b;
    string B(bb.str());

    if (A > B) {
        puts("GREATER");
    } else if (A < B) {
        puts("LESS");
    } else {
        puts("EQUAL");
    }
}