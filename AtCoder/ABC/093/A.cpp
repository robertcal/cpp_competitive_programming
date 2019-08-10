#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
using ll = long long;

int main() {

    string S; cin >> S;

    bool a = false;
    bool b = false;
    bool c = false;

    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'a') {
            a = true;
        }

        if (S[i] == 'b') {
            b = true;
        }

        if (S[i] == 'c') {
            c = true;
        }
    }

    if (a && b && c){
        puts("Yes");
    } else {
        puts("No");
    }
}