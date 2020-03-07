#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, p; cin >> n >> p;
    string s; cin >> s;

    vector<int> b;
    int t = p;
    int k = 1;

    while (s >= to_string(t)) {
        b.push_back(t);
        ++k;
        t = p * k;
    }


}