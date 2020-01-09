#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int n, k;

vector<vector<int>> t;

//bool bug = false;

//void dfs(int a) {
//    for (auto num : t[a]) {
//        if (a == n+1) {
//            return;
//        }
//
//        dfs(a+1) ^ num;
//    }
//}

bool dfs(int numq, int value) {
    if (numq == n) {
        return value == 0; //最終結果が0か調べる
    }

    for (int i = 0; i < k; ++i) {
        if (dfs(numq+1, value ^ t[numq][i])) {
            return true;
        }
    }

    return false;
}

int main() {

    cin >> n >> k;

    t.resize(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            int a; cin >> a;

            t[i].push_back(a);
        }
    }

    if (dfs(0, 0)) {
        puts("Found");
    } else {
        puts("Nothing");
    }
}