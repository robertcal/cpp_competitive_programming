#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n, m; cin >> n >> m;

    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<string> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    bool ans;

    for (int i = 0; i < n-m+1; ++i) {
        for (int j = 0; j < n-m+1; ++j) {
            ans = true;

            for (int k = 0; k < m; ++k) {
                for (int l = 0; l < m; ++l) {
                    if (a[i+k][j+l] != b[k][l]){
                        ans = false;
                    }
                }
            }

            if (ans) {
                puts("Yes");
                return 0;
            }
        }
    }

    puts("No");
}