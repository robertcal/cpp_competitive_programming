#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> d(N);
    for (int i = 0; i < N; ++i) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    cout << d[N/2] - d[N/2-1] << endl;
}