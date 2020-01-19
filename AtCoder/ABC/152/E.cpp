#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll LINF = 1e18;
#define F first
#define S second
#define MAX 10000003

ll prime[MAX];
unordered_map<ll, ll> max_map;

ll n;

ll arr[10010];

// Function to return a^n
ll power(ll a, ll n)
{
    if (n == 0)
        return 1;
    ll p = power(a, n / 2) % MOD;
    p = (p * p) % MOD;
    if (n & 1)
        p = (p * a) % MOD;
    return p;
}

// Function to find the smallest prime factors
// of numbers upto MAX
void sieve()
{
    prime[0] = prime[1] = 1;
    for (ll i = 2; i < MAX; i++) {
        if (prime[i] == 0) {
            for (ll j = i * 2; j < MAX; j += i) {
                if (prime[j] == 0) {
                    prime[j] = i;
                }
            }
            prime[i] = i;
        }
    }
}

// Function to return the LCM MODulo M
ll lcmMODuloM(const ll* ar, ll n)
{

    for (ll i = 0; i < n; i++) {
        ll num = ar[i];
        unordered_map<ll, ll> temp;

        // Temp stores mapping of prime factor to
        // its power for the current element
        while (num > 1) {

            // Factor is the smallest prime factor of num
            ll factor = prime[num];

            // Increase count of factor in temp
            temp[factor]++;

            // Reduce num by its prime factor
            num /= factor;
        }

        for (auto it : temp) {

            // Store the highest power of every prime
            // found till now in a new map max_map
            max_map[it.first] = max(max_map[it.first], it.second);
        }
    }

    ll ans = 1;

    for (auto it : max_map) {

        // LCM is product of primes to their highest powers MODulo M
        ans = (ans * power(it.F, it.S)) % MOD;
    }

    return ans;
}

int main() {

    cin >> n;

    ll s = 1;

    for (ll i = 0; i < n; ++i) {
        ll a; cin >> a;

        arr[i] = a;

        s *= a;
        s %= MOD;
    }


    ll lcm = lcmMODuloM(arr, n);

    ll ans = 0;

    ll t = lcm / s;
    t %= MOD;

    for (ll i = 0; i < n; ++i) {
        ans += (t * ((s / arr[i]) % MOD)) % MOD;
    }

    cout << ans % MOD << endl;
}