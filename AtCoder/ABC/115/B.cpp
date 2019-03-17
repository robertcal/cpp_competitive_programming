#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; cin >> N;
    vector<int> p(N);

    for (int i = 0; i < N; ++i) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    int ans = 0;
    for (int j = 0; j < N - 1; ++j) {
        ans += p[j];
    }

    ans += p[N-1] / 2;

    cout << ans << endl;
}
