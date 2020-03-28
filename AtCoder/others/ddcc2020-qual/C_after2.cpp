#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int h, w, k;
int a[310][310];
int num;
int cnt[310];
char c[310][310];

void solve(int cl, int cr) {
    vector<int> p;
    for (int i = cl; i <= cr; ++i) {
        for (int j = 1; j <= w; ++j) {
            if (c[i][j] == '#') p.push_back(j); //横方向でいちごのある位置
        }
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < p.size(); ++i) {
        int v1 = 1, v2 = w;
        if (i >= 1) v1 = p[i-1] + 1;
        if (i < (int)p.size() - 1) v2 = p[i]; ////このif文は最後はwまで見たいので入れている

        num++;
        for (int j = cl; j <= cr; ++j) {
            for (int k = v1; k <= v2; ++k) {
                a[j][k] = num;
            }
        }
    }
}

int main() {

    cin >> h >> w >> k;

    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            cin >> c[i][j];
            if (c[i][j] == '#') cnt[i]++;
        }
    }

    vector<int> vec;
    for (int i = 1; i <= h; ++i) {
        if (cnt[i] >= 1) vec.push_back(i);
    }

    for (int i = 0; i < vec.size(); ++i) {
        int v1 = 1, v2 = h;
        if (i >= 1) v1 = vec[i-1] + 1; //前に#があった行の次の行から
        if (i < (int)vec.size() - 1) v2 = vec[i]; //このif文は最後はhまで見たいので入れている

        solve(v1, v2);
    }

    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            if (j >= 2) cout << " "; cout << a[i][j];
        }
        cout << endl;
    }
}