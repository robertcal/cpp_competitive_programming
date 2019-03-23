#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; ++i) {
        cin >> b[i];
        if (b[i] > i + 1) {
            cout << -1 << endl;
            return 0;
        }
    }

}