#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int n, k; cin >> n >> k;
    string s; cin >> s;

    //1の個数、0の個数を記録
    vector<int> nums;
    if (s[0] == '0') {
        nums.push_back(0);
    }

    for (int i = 0; i < s.size();) {
        int j = i;
        while (j < s.size() && s[j] == s[i]) {
            ++j;
        }

        nums.push_back(j - i);

        i = j;
    }

    if (s[s.size()-1] == '0') {
        nums.push_back(0);
    }

    vector<int> sums(nums.size()+1, 0);
    for (int i = 0; i < nums.size(); ++i) {
        sums[i+1] = sums[i] + nums[i];
    }

    int ans = 0;
    for (int left = 0; left < sums.size(); left += 2) {
        int right = left + 2 * k + 1;

        if (right >= sums.size()) {
            right = sums.size() - 1;
        }

        ans = max(ans, sums[right] - sums[left]);
    }

    cout << ans << endl;
}