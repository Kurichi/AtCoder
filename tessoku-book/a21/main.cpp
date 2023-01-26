#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define alin(v)       \
	for (auto &a : v) \
		cin >> a;
#define all(v) (v).begin(), (v).end()
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
#define grei     \
	greater<int> \
	{            \
	}
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
using vl = vector<ll>;
using vll = vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using si = set<int>;
using sl = set<ll>;
template <typename T>
using uset = unordered_set<T>;
template <typename T1, typename T2>
using umap = unordered_map<T1, T2>;

int N, P[2009], A[2009];
int dp[2009][2009];

void Main()
{
	cin >> N;
	for (int i = 1; i <= N; ++i)
		cin >> P[i] >> A[i];

	dp[1][N] = 0;
	for (int len = N - 2; len >= 0; --len)
	{
		for (int l = 1; l <= N - len; ++l)
		{
			int r = l + len;

			int score1 = 0;
			if (l <= P[l - 1] && P[l - 1] <= r)
				score1 = A[l - 1];

			int score2 = 0;
			if (l <= P[r + 1] && P[r + 1] <= r)
				score2 = A[r + 1];

			if (l == 1)
				dp[l][r] = dp[l][r + 1] + score2;
			else if (r == N)
				dp[l][r] = dp[l - 1][r] + score1;
			else
				dp[l][r] = max(dp[l - 1][r] + score1, dp[l][r + 1] + score2);
		}
	}

	int ans = 0;
	for (int i = 1; i <= N; ++i)
		mxin(ans, dp[i][i]);
	cout << ans << endl;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	Main();
	return 0;
}
