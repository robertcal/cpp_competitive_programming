#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c; cin >> a >> b >> c;

    cout << min({a+b, b+c, c+a}) << endl;
}