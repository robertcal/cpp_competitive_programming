#include <bits/stdc++.h>

using namespace std;

int main() {

    string S; cin >> S;

    int min_diff = 1000;

    for (int i = 0; i < S.length() - 2; ++i) {
        string num;
        num = S.substr(i, 3);
        int diff;
        diff = abs(stoi(num) - 753);

        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;
}
