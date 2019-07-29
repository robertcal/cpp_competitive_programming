#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll a, b; cin >> a >> b;

    ll t = b - a;

    cout << t * (t + 1) / 2 - b << endl;
}