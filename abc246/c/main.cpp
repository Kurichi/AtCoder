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

int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    vi a(n);
    alin(n, a);
    sort(all(a), greater<int>{});

    for (int i = 0; i < n && k > 0; i++)
    {
        int w = a[i] / x;
        if (w <= k)
        {
            a[i] -= w * x;
            k -= w;
        }
        else
        {
            a[i] -= k * x;
            k = 0;
        }
    }
    if (k > 0)
    {
        sort(all(a), greater<int>{});
        for (int i = 0; i < min(k, n); i++)
        {
            a[i] = 0;
        }
    }
    ll sum = 0;
    rep(i, n)
    {
        sum += a[i];
    }
    cout << sum << endl;

    return 0;
}
