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
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n);
    inputAll(n, a);

    ll count = 0;
    bool xflag, yflag;
    int minl, minr, maxr;
    rep(i, n)
    {
        int MIN, MAX;
        MIN = MAX = a[i];
        minl = minr = maxr = n;
        for (int j = i; j < n; j++)
        {
            MIN = min(MIN, a[j]);
            MAX = max(MAX, a[j]);
            if (MIN < y || MAX > x)
            {
                maxr = j;
                break;
            }
            if (MIN == y || MAX == x)
                minl = min(minl, j);
            if (MIN == y && MAX == x)
                minr = min(minr, j);
        }
        if (minl >= i && maxr >= minr)
        {
            count += (minl - i + 1) * (maxr - minr);
            i = minl;
        }
        else
        {
            i = maxr;
        }
    }

    cout << count << endl;

    return 0;
}