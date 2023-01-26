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
#define F first;
#define S second;
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

int N, M, A[109];
int dp[109][1099];

void Main()
{
	cin >> N >> M;
	rep(i, M)
	{
		int v = 0;
		rep(j, N)
		{
			int x;
			cin >> x;
			v = v * 2 + x;
		}
		A[i] = v;
	}

	rep(i, M + 1) rep(j, (1 << N)) dp[i][j] = 1e9;
	dp[0][0] = 0;

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < (1 << N); ++j)
		{
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			dp[i + 1][j | A[i]] = min(dp[i + 1][j | A[i]], dp[i][j] + 1);
		}
	}
	// for (int i = 0; i <= M; ++i)
	// {
	// 	for (int j = 0; j < (1 << N); ++j)
	// 	{
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	if (dp[M][(1 << N) - 1] < 1e9)
		cout << dp[M][(1 << N) - 1] << endl;
	else
		cout << -1 << endl;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	Main();
	return 0;
}
