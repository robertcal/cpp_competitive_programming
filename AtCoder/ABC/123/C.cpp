#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    long long N; cin >> N;

    vector<long long> t(5);
    for (int i = 0; i < 5; ++i) {
        cin >> t[i];
    }

    long long t_min = 0;
    t_min = *min_element(t.begin(), t.end());

    long long ans = 0;

    if (N <= t_min) {
        ans = 5;
    } else {
        if (N % t_min == 0) {
            ans = N / t_min + 4;
        } else {
            ans = N / t_min + 5;
        }
     }

    cout << ans << endl;
}