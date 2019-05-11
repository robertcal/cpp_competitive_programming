#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    int AB = 0;
    int A_end = 0;
    int B_start = 0;

    int same = 0;

    string S = "AB";

    vector<string> s(N);
    for (int i = 0; i < N; ++i) {
        bool same_flg = false;

        cin >> s[i];

        for (int j = 0; j < s[i].size() - S.size() + 1; ++j) {
            if (s[i].substr(j, S.size()) == S) {
                ++AB;
            }
        }

        if (s[i].find_last_of('A') == s[i].size() - 1) {
            ++A_end;
            same_flg = true;
        }

        if (s[i].find_first_of('B') == 0) {
            ++B_start;
            if (same_flg) {
                ++same;
            }
        }
    }

    if (A_end > 0 && A_end == B_start && B_start == same) {
        cout << AB + same - 1 << endl;
    } else {
        cout << AB + min(A_end, B_start) << endl;
    }
}