#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string k; cin >> k;

    int agari = 0;
    string kakeru = "";
    for (int i = 0; i < k.length(); ++i) {
        int num = k[k.length() - i - 1] - '0';
        //一桁ずつ0〜9を試していく
        for (int j = 0; j <= 9; ++j) {
            int tmp = num * j + agari;

            if (tmp % 10 == 7) {
                // 数字OK
                kakeru += j + '0';
                agari = tmp / 10;
            }
        }
    }

    if (kakeru == "") {
        cout << -1 << endl;
    }

    reverse(kakeru.begin(), kakeru.end());

    cout << kakeru << endl;
}