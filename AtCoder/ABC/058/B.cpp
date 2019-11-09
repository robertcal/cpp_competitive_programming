#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    string o, e; cin >> o >> e;

    for (int i = 0; i < e.size(); ++i) {
        cout << o[i] << e[i];
    }

    if (o.size() - e.size() == 1) {
        cout << o[o.size()-1];
    }

    cout << endl;
}