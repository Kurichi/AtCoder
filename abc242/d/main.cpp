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

int main()
{
    string s;
    int q;
    cin >> s >> q;

    rep(qi, q)
    {
        ll t, k;
        cin >> t >> k;
        ll r = __builtin_popcountll(--k);
        cerr << r << endl;
        r += t;
        if (t < 60)
            k >>= t;
        else
            k = 0;
        ll x = r + s[k] - 'A' - __builtin_popcountll(k);
        cout << (char)('A' + (x % 3)) << endl;
    }
    return 0;
}