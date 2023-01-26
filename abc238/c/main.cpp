#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)
using ll = long long;

const int MOD = 998244353;

void ADD(ll *a, ll b)
{
    *a += b;
    *a %= MOD;
}

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;

    ll x;
    for (x = 9; x < n; x = x * 10 + 9)
    {
        ll num = x - (x / 10);
        num %= MOD;
        ADD(&ans, ((1 + num) % MOD) * num / 2);
    }
    ll num = n - (x / 10);
    num %= MOD;
    ADD(&ans, ((1 + num) % MOD) * num / 2);

    cout << ans << endl;
    return 0;
}