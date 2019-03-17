#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N; cin >> N;

    while (true) {
        int a; a = N / 100;
        int b; b = (N % 100) / 10;
        int c; c = N % 10;

        if (a == b && b == c) {
            cout << N << endl;
            return 0;
        }

        ++N;
    }
}