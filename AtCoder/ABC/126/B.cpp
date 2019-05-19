#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    string S; cin >> S;

    int a = (S[0] - '0') * 10 + S[1] - '0';
    int b = (S[2] - '0') * 10 + S[3] - '0';

    if ((a == 0 && 13 <= b) || (b == 0 && 13 <= a)) {
        cout << "NA" << endl;
        return 0;
    }

    if (1 <= a && a <= 12 && 1 <= b && b<= 12 ) {
        cout << "AMBIGUOUS" << endl;
        return 0;
    }

    if (1 <= a && a <= 12) {
        cout << "MMYY" << endl;
        return 0;
    }

    if (1 <= b && b <= 12) {
        cout << "YYMM" << endl;
        return 0;
    }

    cout << "NA" << endl;
    return 0;
}