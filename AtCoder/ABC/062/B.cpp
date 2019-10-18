#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int h, w; cin >> h >> w;

    vector<string> a(h);
    for (int i = 0; i < h; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < w+2; ++i) {
        cout << '#';
    }

    cout << endl;

    for (int i = 0; i < h; ++i) {
        cout << '#' << a[i] << '#' << endl;
    }

    for (int i = 0; i < w+2; ++i) {
        cout << '#';
    }

    cout << endl;
}