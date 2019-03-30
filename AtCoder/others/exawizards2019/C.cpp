#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, Q; cin >> N >> Q;
    string s; cin >> s;

    map<char, int> mp;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    mp['D'] = 0;
    mp['E'] = 0;
    mp['F'] = 0;
    mp['G'] = 0;
    mp['H'] = 0;
    mp['I'] = 0;
    mp['J'] = 0;
    mp['K'] = 0;
    mp['L'] = 0;
    mp['M'] = 0;
    mp['N'] = 0;
    mp['O'] = 0;
    mp['P'] = 0;
    mp['Q'] = 0;
    mp['R'] = 0;
    mp['S'] = 0;
    mp['T'] = 0;
    mp['U'] = 0;
    mp['V'] = 0;
    mp['W'] = 0;
    mp['X'] = 0;
    mp['Y'] = 0;
    mp['Z'] = 0;

    for (int i = 0; i < N; ++i) {
        mp[s[i]] += 1 << N - i - 1;
    }

    for (int j = 0; j < Q; ++j) {
        char t, d; cin >> t >> d;

        if (d == 'L') {
            mp[t] << 1;
            if (mp[t] > (1 << N)) {
                mp[t] -= 1 << N;
            }
        } else {
            mp[t] >> 1;
        }
    }

    int sum = 0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        sum += itr->second;
    }


}