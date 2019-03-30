#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;
    string s; cin >> s;


    int blue = 0;
    int red = 0;
    for (int i = 0; i < N; ++i) {
        if (s[i] == 'B') {
            ++blue;
        } else {
            ++red;
        }
    }

    if (red > blue) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
