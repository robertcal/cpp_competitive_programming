#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int a, b; cin >> a >> b;

    cout << max(a * (b+1), (a+1) * b) << endl;
}