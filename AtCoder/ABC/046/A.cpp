#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    set<int> se;

    int a, b, c; cin >> a >> b >> c;

    se.insert(a);
    se.insert(b);
    se.insert(c);

    cout << se.size() << endl;
}