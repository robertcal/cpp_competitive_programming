#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    string S; cin >> S;

    ll left_R = 0;
    ll right_L = 0;

    ll i = 0;

    while (i < S.length()) {

        if (S[i] == 'R' && S[i+1] == 'L') {
            ll j = i + 2;
            while (S[j] == 'L') {
                ++right_L;
                ++j;
            }

            ll t1 = 0;
            ll t2 = 0;

            if ((left_R + right_L) % 2 == 0) {
                t1 = (left_R + right_L) / 2;
                t2 = (left_R + right_L) / 2;
            } else {
                t1 = right_L;
                t2 = left_R;
            }

            for (int k = 0; k < left_R; ++k) {
                cout << '0';
            }

            cout << 1 + t1 << 1 + t2;

            for (int k = 0; k < right_L; ++k) {
                cout << '0';
            }

            i = j;
            left_R = 0;
            right_L = 0;
        } else if (S[i] == 'R') {
            ++left_R;
            ++i;
        }
    }

    cout << endl;
}