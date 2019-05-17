#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    long long N; cin >> N;

    long long ans = 0;

    //N = mi+i = i(m+1)
    //余りの定義から m > i
    //N > i(i+1)
    for (long long i = 1; i <= sqrt(N); ++i) {
        if ((N-i)%i == 0 && (N-i)/i > i) {
            ans += (N-i)/i;
        }
    }

    cout << ans << endl;
}