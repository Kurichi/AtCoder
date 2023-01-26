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
    int n;
    cin >> n;
    vl p(n), cpy;
    alin(n, p);

    cpy = p;

    sort(all(cpy));
    ll M = cpy[n / 2];

    ll m = p[n - 1];
    ll ans = 0;
    int cnt = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (p[i] < m && p[i] < M)
        {
            ans -= p[i];
            cnt++;
        }
    }

    return 0;
}