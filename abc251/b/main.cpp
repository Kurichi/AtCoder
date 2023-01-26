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
    int n, w;
    cin >> n >> w;
    vi v(n);
    alin(n, v);

    sort(all(v));
    set<int> l;

    rep(i, n)
    {
        if (v[i] <= w)
            l.insert(v[i]);
        else
            break;
        REP(j, i + 1, n)
        {
            if (v[i] + v[j] <= w)
                l.insert(v[i] + v[j]);
            else
                break;
            REP(k, j + 1, n)
            {
                if (v[i] + v[j] + v[k] <= w)
                    l.insert(v[i] + v[j] + v[k]);
                else
                    break;
            }
        }
    }

    cout << l.size() << endl;

    return 0;
}
