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

struct item
{
	int w;
	int v;
};

const int V = 1000;
int N, W;
item Item[109];
ll dp[100009];

void Main()
{
	cin >> N >> W;
	rep(i, N) cin >> Item[i].w >> Item[i].v;
	rep(i, N * V + 1) dp[i] = W + 1;
	dp[0] = 0;

	rep(i, N)
	{
		for (int j = N * V; j >= Item[i].v; --j)
		{
			if (dp[j - Item[i].v] + Item[i].w <= W)
				dp[j] = min(dp[j], dp[j - Item[i].v] + Item[i].w);
		}
	}

	for (int i = N * V; i >= 0; --i)
	{
		if (dp[i] <= W)
		{
			cout << i << endl;
			break;
		}
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
