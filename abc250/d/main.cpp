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

    ll n;
    cin >> n;

    vl prime;
    prime.push_back(2);
    for (ll i = 3; i < cbrt(n); i += 2)
    {
        bool flag = true;
        for (ll j = 0; prime[j] <= sqrt(i); j++)
        {
            if (i % prime[j] == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            prime.push_back(i);
    }

    ll size = prime.size();
    ll cnt = 0;
    for (ll i = 0; i < size; i++)
    {
        for (ll j = i + 1; j < size; j++)
        {
            ll x = prime[j] * prime[j] * prime[j];
            if (1 < x && x <= n / prime[i])
                cnt++;
            else
                break;
        }
    }

    cout << cnt << endl;

    return 0;
}
