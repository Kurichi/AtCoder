#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)

bool dp[101][10001] = {false};

int main()
{
    int N, X;
    cin >> N >> X;
    vector<pair<int, int>> a(N);
    rep(i, N) cin >> a[i].first >> a[i].second;

    dp[0][0] = true;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 10001; j++)
        {
            if (j + a[i - 1].first > X)
                break;
            dp[i][j + a[i - 1].first] |= dp[i - 1][j];
            if (j + a[i - 1].second > X)
                continue;
            dp[i][j + a[i - 1].second] |= dp[i - 1][j];
        }
    }

    // rep(i, N + 1)
    // {
    //     rep(j, X + 1)
    //     {
    //         cout << dp[i][j];
    //     }
    //     cout << endl;
    // }

    if (dp[N][X])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}