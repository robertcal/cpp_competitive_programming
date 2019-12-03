#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;

    int dx1 = tx - sx;
    int dy1 = ty - sy;

    string s1, s2;

    for (int i = 0; i < dx1; ++i) {
        s1 += 'R';
        s2 += 'L';
    }

    for (int i = 0; i < dy1; ++i) {
        s1 += 'U';
        s2 += 'D';
    }

    string s3, s4;

    s3 += 'L';
    s4 += 'R';

    for (int i = 0; i < dy1+1; ++i) {
        s3 += 'U';
        s4 += 'D';
    }

    for (int i = 0; i < dx1+1; ++i) {
        s3 += 'R';
        s4 += 'L';
    }

    s3 += 'D';
    s4 += 'U';

    cout << s1 + s2 + s3 + s4 << endl;
}