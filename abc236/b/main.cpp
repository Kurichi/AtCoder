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
    cin >> n;
    vi c(n, 0);
    rep(i, 4 * n - 1)
    {
        int x;
        cin >> x;
        c[x - 1]++;
    }
    rep(i, n)
    {
        if (c[i] == 3)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}