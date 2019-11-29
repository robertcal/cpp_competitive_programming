#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b, c; cin >> a >> b >> c;

    int mi = min(a, b);

    cout << c / mi << endl;
}