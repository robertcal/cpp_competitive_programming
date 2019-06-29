#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;

    if ((S[0] == S[1] && S[2] == S[3] && S[0] != S[2]) || (S[0] == S[2] && S[1] == S[3] && S[0] != S[1]) || (S[0] == S[3] && S[1] == S[2] && S[0] != S[1])) {
        puts("Yes");
        return 0;
    }

    puts("No");
}