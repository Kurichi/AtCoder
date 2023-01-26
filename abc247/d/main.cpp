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
    queue<pair<int, int>> q;
    rep(ni, n)
    {
        int a, x, c;
        cin >> a;
        if (a == 1)
        {
            cin >> x >> c;
            q.push(make_pair(x, c));
        }
        else
        {
            cin >> c;
            ll sum = 0;
            int i = 0;
            while (i < c)
            {
                if (i + q.front().second < c)
                {
                    sum += (ll)q.front().first * q.front().second;
                    i += q.front().second;
                    q.pop();
                }
                else
                {
                    sum += (ll)q.front().first * (c - i);
                    q.front().second -= (c - i);
                    i = c;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}