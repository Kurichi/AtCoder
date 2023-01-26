#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define alin(n, v)              \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define all(v) (v).begin(), (v).end()
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
using vl = vector<ll>;
using vll = vector<vl>;

ll f(ll a, ll b)
{
    return (a + b) * (a * a + b * b);
}

int main()
{
    ll n;
    cin >> n;
    ll ans = INFINITY;
    for (ll i = 0, j = 1000000; i < 1000001; i++)
    {
        while (f(i, j) >= n && j >= 0)
        {
            mnin(ans, f(i, j));
            j--;
        }
    }
    cout << ans << endl;
    return 0;
}
