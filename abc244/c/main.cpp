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
    vector<bool> x(2 * n + 1, true);

    while (1)
    {
        // takahashi
        rep(i, 2 * n + 1)
        {
            if (x[i])
            {
                cout << i + 1 << endl
                     << flush;
                x[i] = false;
                break;
            }
        }
        int a;
        cin >> a;
        if (a == 0)
        {
            return 0;
        }
        x[a - 1] = false;
    }
    return 0;
}