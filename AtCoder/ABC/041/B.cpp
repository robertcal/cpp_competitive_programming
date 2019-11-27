#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll a, b, c; cin >> a >> b >> c;

    ll s = a * b % 1000000007;

    cout << s * c % 1000000007 << endl;
}