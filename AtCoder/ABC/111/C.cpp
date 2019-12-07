#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int even[100010] = {};
int odd[100010] = {};

int main() {

    int n; cin >> n;

    for (int i = 1; i <= n; ++i) {
        int v; cin >> v;

        if (i & 1) {
            ++odd[v];
        } else {
            ++even[v];
        }
    }

    int max_e = 0;
    int max_o = 0;
    int second_e = 0;
    int second_o = 0;

    int max_e_i;
    int max_o_i;
    int second_e_i;
    int second_o_i;

    for (int i = 0; i < 100010; ++i) {
        max_e = max(max_e, even[i]);
        if (max_e == even[i]) {
            max_e_i = i;
        }
    }

    for (int i = 0; i < 100010; ++i) {
        if (i != max_e_i) {
            second_e = max(second_e, even[i]);
        }
        if (second_e == even[i]) {
            second_e_i = i;
        }
    }

    for (int i = 0; i < 100010; ++i) {
        max_o = max(max_o, odd[i]);
        if (max_o == odd[i]) {
            max_o_i = i;
        }
    }

    for (int i = 0; i < 100010; ++i) {
        if (i != max_o_i) {
            second_o = max(second_o, odd[i]);
        }
        if (second_o == odd[i]) {
            second_o_i = i;
        }
    }

    if (max_e_i != max_o_i) {
        cout << (n/2 - max_e) + (n/2 - max_o) << endl;
    } else {
        int k1 = (n/2 - max_e) + (n/2 - second_o);
        int k2 = (n/2 - second_e) + (n/2 - max_o);

        cout << min(k1, k2) << endl;
    }
}