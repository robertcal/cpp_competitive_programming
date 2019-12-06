#include <bits/stdc++.h>

#define INF 1e9
using namespace std;
typedef long long ll;

int main() {

    int num[5];
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];

    vector<int> sum;

    for (int i = 0; i < 5; ++i) {
        for (int j = i+1; j < 5; ++j) {
            for (int k = j+1; k < 5; ++k) {
                sum.push_back(num[i] + num[j] + num[k]);
            }
        }
    }

    sort(sum.rbegin(), sum.rend());

    cout << sum[2] << endl;
}