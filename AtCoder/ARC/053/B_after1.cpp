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

    int odd = 0;
    int even_2 = 0; //偶数の文字数/2
    for (int i = 0; i < 26; ++i) {
        if (d[i] % 2 == 1) ++odd;

        even_2 += d[i] / 2;
    }

    //偶数の文字数は、文字列毎になるべく均等に割り振る
    //例：10文字で3つの文字列を作る→4,3,3文字

    if (odd == 0) {
        cout << even_2 * 2 << endl;
    } else {
        //一番小さいものは、文字列数で割って切り捨て
        //半分なので2倍
        //真ん中に1文字あるので+1
        cout << even_2 / odd * 2 + 1;
    }
}