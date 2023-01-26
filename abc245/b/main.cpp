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
    vector<bool> a(2001, true);
    rep(i, n)
    {
        int x;
        cin >> x;
        a[x] = 0;
    }

    rep(i, 2001)
    {
        if (a[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}