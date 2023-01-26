#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define inputAll(n, v)          \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define all(v) (v).begin(), (v).end()
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

const int size = 54773;
int dp[size] = {0};

int main()
{
    dp[1] = 1;
    for (int i = 2; i < size; i++)
    {
        for (int j = 1; j <= sqrt(i); j++)
            dp[i] += dp[j];
    }
    int t;
    cin >> t;
    rep(ti, t)
    {
        ll x;
        cin >> x;
        if (x < size)
        {
            cout << dp[x] << endl;
            continue;
        }

        ll ans = 0;
        ll count = 0;
        for (ll i = 1; i <= sqrt(x); i++)
        {
            ans += count;
            ans += dp[j];
        }

        cout << ans << endl;
    }
    return 0;
}