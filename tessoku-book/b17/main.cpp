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

void Main()
{
	int n;
	cin >> n;
	vi v(n);
	alin(v);

	vi dp(n, 0);
	dp[1] = abs(v[0] - v[1]);
	REP(i, 2, n)
	{
		dp[i] = min(dp[i - 1] + abs(v[i - 1] - v[i]), dp[i - 2] + abs(v[i - 2] - v[i]));
	}

	int x = n - 1;
	stack<int> stk;
	while (x)
	{
		stk.push(x + 1);
		if (dp[x] - dp[x - 1] == abs(v[x - 1] - v[x]))
			x -= 1;
		else
			x -= 2;
	}
	stk.push(1);

	cout << stk.size() << endl;
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
	cout << endl;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	Main();
	return 0;
}
