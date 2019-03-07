#include <bits/stdc++.h>

using namespace std;

int main() {

    int k; cin >> k;

    int num_even, num_odd;

    num_even = k / 2;
    num_odd = k - num_even;

    cout << num_even * num_odd << endl;
}