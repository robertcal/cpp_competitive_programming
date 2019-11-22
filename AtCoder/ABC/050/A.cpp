#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll a; cin >> a;
    string op; cin >> op;
    ll b; cin >> b;

    if (op == "+") {
        cout << a + b << endl;
    } else {
        cout << a - b << endl;
    }
}