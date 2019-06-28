#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, M; cin >> N >> M;

    vector<pair<int, int>> city(M);
    for (int i = 0; i < M; ++i) {
        int P, Y;
        cin >> P >> Y;
        city[i] = make_pair(P, Y);
    }

    sort(city.begin(), city.end());

    int count = 1;
    int before_p = 0;
    for (int i = 0; i < M; ++i) {
        if (before_p != city[i].first) {
            count = 1;
        }

        cout << setw(6) << setfill('0') << city[i].first;
        cout << setw(6) << setfill('0') << count << endl;
    }
}