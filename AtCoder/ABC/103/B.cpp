#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S, T; cin >> S >> T;

    int ok = false;
    string temp = S;
    for (int i = 0; i < S.size(); ++i) {
        temp = temp[temp.size()-1] + temp.substr(0, temp.size()-1);
        if (temp == T) {
            ok = true;
        }
    }

    if (ok) {
        puts("Yes");
    } else {
        puts("No");
    }
}