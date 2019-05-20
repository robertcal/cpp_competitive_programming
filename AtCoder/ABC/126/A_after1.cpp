#include <bits/stdc++.h>

#define INF 1e9
using namespace std;

int main() {

    int N, K; cin >> N >> K;
    string S; cin >> S;

    //該当の文字を大文字、小文字の文字コード数分だけずらす
    S[K-1] = S[K-1] - ('A' - 'a');

    cout << S << endl;
}