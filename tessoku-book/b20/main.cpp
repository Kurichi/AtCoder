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

int dp[2009][2009];

void Main()
{
	string S, T;
	cin >> S >> T;

	rep(i, S.size() + 1) dp[i][0] = i;
	rep(i, T.size() + 1) dp[0][i] = i;

	for (int i = 1; i <= S.size(); ++i)
		for (int j = 1; j <= T.size(); ++j)
		{
			dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
			if (S[i - 1] == T[j - 1])
				dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
		}

	// rep(i, S.size() + 1)
	// {
	// 	rep(j, T.size() + 1)
	// 			cout
	// 		<< dp[i][j] << " ";
	// 	cout << endl;
	// }

	cout << dp[S.size()][T.size()] << endl;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	Main();
	return 0;
}
