#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, q; cin >> n >> q;

    vector<int> a(n), b(n);

    vector<multiset<int>> s(2000010); //各幼稚園の管理
    multiset<int> maxs; //各幼稚園のmax値の管理

    //幼稚園の最大値を取得
    auto getMax = [&](int i) {
        if (s[i].empty()) return -1;
        return *s[i].rbegin();
    };

    //幼稚園のmax値に追加
    auto addYochien = [&](int i) {
        int x = getMax(i);
        if (x == -1) return;
        maxs.insert(x);
    };

    //幼稚園のmax値から削除
    auto delYochien = [&](int i) {
        int x = getMax(i);
        if (x == -1) return;
        maxs.erase(maxs.find(x)); //maxs.erase(x)だとxに該当する複数を削除する
    };

    auto addEnji = [&](int i, int x) {
        //一度max値集団から該当の幼稚園を削除して、改めてmax値集団に追加
        delYochien(i);
        s[i].insert(x);
        addYochien(i);
    };

    auto delEnji = [&](int i, int x) {
        //一度max値集団から該当の幼稚園を削除して、改めてmax値集団に追加
        delYochien(i);
        s[i].erase(s[i].find(x));
        addYochien(i);
    };

    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        addEnji(b[i], a[i]);
    }

    for (int i = 0; i < q; ++i) {
        int c, d; cin >> c >> d;
        --c;

        delEnji(b[c], a[c]);
        b[c] = d;
        addEnji(b[c], a[c]);

        int ans = *maxs.begin();

        cout << ans << endl;
    }
}