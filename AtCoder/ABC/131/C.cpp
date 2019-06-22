#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    long long A, B, C, D; cin >> A >> B >> C >> D;

    long long A_C = 0;
    A_C = A / C;
    if (A % C == 0) {
        --A_C;
    }

    long long A_D = 0;
    A_D = A / D;
    if (A % D == 0) {
        --A_D;
    }

    long long B_C = 0;
    B_C = B / C;
//    if (B % C != 0) {
//        ++B_C;
//    }

    long long B_D = 0;
    B_D = B / D;
//    if (B % D != 0) {
//        ++B_D;
//    }

    long long lcm;
    lcm = C * D / __gcd(C, D);

    long long A_lcm = 0;
    A_lcm = A / lcm;
    if (A % lcm == 0) {
        --A_lcm;
    }

    long long B_lcm = 0;
    B_lcm = B / lcm;
//    if (B % lcm != 0) {
//        ++B_lcm;
//    }

    cout << (B - A + 1) - (B_C - A_C) - (B_D - A_D) + (B_lcm - A_lcm) << endl;
}