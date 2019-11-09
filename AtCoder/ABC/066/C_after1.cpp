#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int n; cin >> n;

    deque<int> deq;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (i % 2 == 0) {
            deq.push_back(a);
        } else {
            deq.push_front(a);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (n % 2 == 0) {
            cout << deq[i];
        } else {
            cout << deq[n-1-i];
        }

        if (i != n-1) {
            cout << ' ';
        }
    }

    cout << endl;
}