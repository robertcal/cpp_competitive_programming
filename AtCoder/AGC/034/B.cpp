#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    int n = s.length();

    ll ans = 0;
    for (int i = 0; i < n - 2; ++i) {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
            s[i] = 'B';
            s[i + 1] = 'C';
            s[i + 2] = 'A';

            ans++;

            int j = i - 1;
            while (j >= 0) {
                if (s[j] == 'A' && s[j + 1] == 'B' && s[j + 2] == 'C') {
                    s[j] = 'B';
                    s[j + 1] = 'C';
                    s[j + 2] = 'A';

                    j--;
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}