#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    string s; cin >> s;
    int q; cin >> q;

    deque<char> deq;
    bool rev = false;

    for (int i = 0; i < s.size(); ++i) {
        deq.push_back(s[i]);
    }

    for (int i = 0; i < q; ++i) {
        int t; cin >> t;

        if (t == 1) {
            rev = !rev;
        } else {
            int f; cin >> f;
            char c; cin >> c;

            if (!rev) {
                if (f == 1) {
                    deq.push_front(c);
                } else {
                    deq.push_back(c);
                }
            } else {
                if (f == 1) {
                    deq.push_back(c);
                } else {
                    deq.push_front(c);
                }
            }
        }
    }

    if (rev) {
        reverse(deq.begin(), deq.end());
    }


    for (char t : deq) {
        cout << t;
    }

    cout << endl;
}