#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;

    int d[26] = {};

    for (int i = 0; i < s.length(); ++i) {
        d[s[i] - 'a']++;
    }

    priority_queue<int, vector<int>, greater<int>> even;
    priority_queue<int> odd;

    for (int i = 0; i < 26; ++i) {
        if (d[i] % 2 == 0) {
            even.push(d[i]);
        } else {
            odd.push(d[i]);
        }
    }

    if (even.size() >= odd.size()) {
        if (odd.empty()) {
            while (even.size() > 1) {
                int t1 = even.top(); even.pop();
                int t2 = even.top(); even.pop();

                even.push(t1 + t2);
            }

            cout << even.top() << endl;
            return 0;
        }

        while (even.size() > odd.size()) {
            int t1 = even.top(); even.pop();
            int t2 = even.top(); even.pop();

            even.push(t1 + t2);
        }

        vector<int> sum;
        while (!even.empty()) {
            int e = even.top(); even.pop();
            int o = odd.top(); odd.pop();

            sum.push_back(e + o);
        }

        sort(sum.begin(), sum.end());

        cout << sum[0] << endl;
    } else {
        vector<int> sum;
        while (!even.empty()) {
            int e = even.top(); even.pop();
            int o = odd.top(); odd.pop();

            sum.push_back(e + o);
        }

        while (!odd.empty()) {
            int o = odd.top(); odd.pop();

            sum.push_back(o);
        }

        sort(sum.begin(), sum.end());

        cout << sum[0] << endl;
    }
}