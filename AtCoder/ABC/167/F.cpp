#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    int l_cnt = 0; // (
    int r_cnt = 0; // )
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        stack<char> st;
        for (int j = 0; j < s[i].length(); ++j) {
            if (!st.empty()) {
                char p = st.top();
                if (p == '(' && s[i][j] == ')') {
                    st.pop();
                } else {
                    st.push(s[i][j]);
                }
            } else {
                st.push(s[i][j]);
            }
        }

        while(!st.empty()) {
            cnt++;
            char p = st.top(); st.pop();
            if (p == '(') l_cnt++;
            if (p == ')') r_cnt++;
        }
    }

    if (l_cnt == r_cnt && cnt % 2 == 0) {
        puts("Yes");
    } else {
        puts("No");
    }
}