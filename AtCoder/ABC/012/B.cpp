#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n; cin >> n;

    int h = n / 3600;

    n %= 3600;

    int m = n / 60;
    int s = n % 60;

    cout << setfill('0') << right << setw(2) << h << ':' << setfill('0') << right << setw(2) << m << ':' << setfill('0') << right << setw(2) << s << endl;
}