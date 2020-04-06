#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int t; cin >> t;

    for (int i = 0; i < t; ++i) {
        int n; cin >> n;

        vector<pair<int, int>> time(n);

        for (int j = 0; j < n; ++j) {
            int s, e; cin >> s >> e;
            time[j] = make_pair(s, e);
        }

        bool output = false;

        for (int bit = 0; bit < (1 << n); ++bit) {
            int j_time[1500] = {};
            int c_time[1500] = {};

            bool ok = true;
            string answer = "";

            for (int j = 0; j < n; ++j) {
                if (bit & (1 << j)) {
                    //Jが担当
                    for (int k = time[j].first + 1; k <= time[j].second - 1; ++k) {
                        if (j_time[k] == 1) {
                           ok = false;
                           break;
                        }
                    }

                    if (ok) {
                        for (int k = time[j].first; k <= time[j].second; ++k) {
                            j_time[k] = 1;
                        }

                        answer += 'J';
                    }
                } else {
                    //Cが担当
                    for (int k = time[j].first + 1; k <= time[j].second - 1; ++k) {
                        if (c_time[k] == 1) {
                            ok = false;
                            break;
                        }
                    }

                    if (ok) {
                        for (int k = time[j].first; k <= time[j].second; ++k) {
                            c_time[k] = 1;
                        }

                        answer += 'C';
                    }
                }

                if (!ok) break;
            }

            if (ok) {
                cout << "Case #" << i + 1 << ": " << answer << endl;
                output = true;
                break;
            }
        }

        if (!output) {
            cout << "Case #" << i + 1 << ": " << "IMPOSSIBLE" << endl;
        }
    }
}