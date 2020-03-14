#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    map<string, int> ma;
    ma["SUN"] = 7;
    ma["MON"] = 6;
    ma["TUE"] = 5;
    ma["WED"] = 4;
    ma["THU"] = 3;
    ma["FRI"] = 2;
    ma["SAT"] = 1;

    string s; cin >> s;

    cout << ma[s] << endl;
}