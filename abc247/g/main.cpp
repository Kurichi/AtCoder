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
    int n;
    int mp[151][151] = {-1};
    rep(i, n)
    {
        int a, b, c;
        cin >> a >> b >> c;
        mp[a][b] = c;
    }
    ll max = 0;

    return 0;
}