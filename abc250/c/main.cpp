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
    int n, q;
    cin >> n >> q;
    vi v(n), p(n);
    rep(i, n)
    {
        v[i] = i + 1;
        p[i] = i;
    }
    while (q--)
    {
        int x;
        cin >> x;
        if (p[x - 1] == n - 1)
        {
            int tmp = v[p[x - 1] - 1];
            v[p[x - 1] - 1] = v[p[x - 1]];
            v[p[x - 1]] = tmp;

            swap(p[x - 1], p[tmp - 1]);
        }
        else
        {
            int tmp = v[p[x - 1] + 1];
            v[p[x - 1] + 1] = v[p[x - 1]];
            v[p[x - 1]] = tmp;

            swap(p[x - 1], p[tmp - 1]);
        }
    }

    rep(i, n)
            cout
        << v[i] << " ";
    cout << endl;

    return 0;
}
