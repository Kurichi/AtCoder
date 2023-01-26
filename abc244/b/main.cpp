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
    int d = 0;
    int n;
    string t;
    cin >> n >> t;
    int x, y;
    x = y = 0;
    rep(ni, n)
    {
        char c = t[ni];
        if (c == 'S')
        {
            if (d == 0)
            {
                x++;
            }
            else if (d == 1)
            {
                y--;
            }
            else if (d == 2)
            {
                x--;
            }
            else
            {
                y++;
            }
        }
        else
        {
            d = (d + 1) % 4;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}