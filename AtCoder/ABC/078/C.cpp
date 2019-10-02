#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    ll n, m; cin >> n >> m;

    cout << m * 1900 * pow(2, (double)m) + (n-m) * 100 * pow(2, (double)m) << endl;
}