#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    vector<int> number(3);
    cin >> number[0] >> number[1] >> number[2];

    sort(number.begin(), number.end());

    cout << number[0] + stoi(to_string(number[2]) + to_string(number[1])) << endl;
}