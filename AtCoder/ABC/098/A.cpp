#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    ll A, B; cin >> A >> B;

    cout << max({A+B, A-B, A*B}) << endl;
}