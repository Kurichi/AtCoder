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
using vl = vector<ll>;
using vvl = vector<vl>;

int main()
{
    int n, k;
    cin >> n >> k;
    vvl dp(n + 1, vl(k + 1, -(ll)INFINITY));
    dp[0][0] = 0;

    int now_k = 1;
    ll MAX = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;
        ll y;
        cin >> t >> y;
        MAX = max(dp[i - 1][0], MAX);
        dp[i][0] = ((t == 1) ? y : dp[i - 1][0] + y);
        if (t == 1 && MAX <= y)
            continue;
        for (int j = 1; j <= min(i, k); j++)
        {
            dp[i][j] = max(dp[i - 1][j - 1], ((t == 1) ? y : dp[i - 1][j] + y));
            MAX = max(dp[i][j], MAX);
        }
    }
    MAX = -(ll)INFINITY;
    rep(i, k + 1)
    {
        MAX = max(MAX, dp[n][i]);
    }
    cout << MAX << endl;

    return 0;
}