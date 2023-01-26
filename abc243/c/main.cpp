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

struct person
{
    int x;
    int y;
    char d;
    bool operator<(const person &another) const
    {
        if (y != another.y)
            return y < another.y;
        else
            return x < another.x;
    }

} typedef P;

int main()
{
    int n;
    cin >> n;
    vector<P> p(n);
    rep(i, n)
            cin >>
        p[i].x >> p[i].y;
    rep(i, n)
    {
        char c;
        cin >> c;
        p[i].d = c;
    }
    sort(all(p));

    int y = p[0].y;
    bool flag = false;
    rep(i, n)
    {
        if (y != p[i].y)
        {
            y = p[i].y;
            flag = false;
        }
        if (p[i].d == 'R')
            flag = true;
        else if (flag)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}