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
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int sec = x;

    int t = 0;
    while (sec >= a)
    {
        t += (a * b);
        sec -= a;
        sec -= c;
    }
    if (sec > 0)
        t += (sec * b);
    int ao = 0;
    while (x >= d)
    {
        ao += (d * e);
        x -= d;
        x -= f;
    }
    if (x > 0)
        ao += (x * e);

    if (t > ao)
        cout << "Takahashi" << endl;
    else if (t == ao)
        cout << "Draw" << endl;
    else
        cout << "Aoki" << endl;

    return 0;
}