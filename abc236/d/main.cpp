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
#define mxin(a, b) a = max(a, b)

vvi joy;
int solve(vector<bool> p, vector<pair<int, int>> c = vector<pair<int, int>>())
{
    if (p.size() == c.size() * 2)
    {
        int x = 0;
        for (int i = 0; i < c.size(); i++)
        {
            x ^= joy[c[i].first][c[i].second];
        }
        return x;
    }
    int l = 0;
    rep(i, p.size()) if (p[i] == true)
    {
        l = i;
        p[i] = false;
        break;
    }

    int ans = 0;
    REP(i, l + 1, p.size())
    {
        if (!p[i])
            continue;
        c.push_back(make_pair(l, i));
        p[i] = false;
        mxin(ans, solve(p, c));
        c.erase(c.end());
        p[i] = true;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    joy = vvi(2 * n, vi(2 * n));
    rep(i, 2 * n)
            REP(j, i + 1, 2 * n)
                cin >>
        joy[i][j];

    vector<bool> p(2 * n, true);
    cout << solve(p) << endl;

    return 0;
}
