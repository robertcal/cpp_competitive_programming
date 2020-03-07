#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string x; cin >> x;

    int sum = 0;

    //SSTSTTのような場合に対応できないためダメ
    for (int i = 0; i < x.size()-1; ++i) {
        if (x[i] == 'S' && x[i+1] == 'T') {
            ++sum;
            int l = i-1;
            int r = l+2;
            while (l >= 0 && r <= x.size()-1 && x[l] == 'S' && x[r] == 'T') {
                ++sum;
                --l; ++r;
            }
        }
    }

    cout << x.size() - sum * 2 << endl;
}