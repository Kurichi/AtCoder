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

int N, S, A[69];
int dp[10009];

void Main()
{
	cin >> N >> S;
	rep(i, N) cin >> A[i];
	dp[0] = 1;
	rep(i, S) dp[i + 1] = 0;

	rep(i, N)
	{
		for (int j = S; j >= 0; --j)
		{
			if (j >= A[i] && dp[j - A[i]] && !dp[j])
				dp[j] = i + 1;
		}
	}

	if (dp[S] == 0)
	{
		cout << -1 << endl;
		return;
	}

	int x = S;
	stack<int> stk;
	while (x != 0)
	{
		stk.push(dp[x]);
		x -= A[dp[x] - 1];
	}

	cout << stk.size() << endl;
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	Main();
	return 0;
}
