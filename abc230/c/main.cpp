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
	ll n, a, b;
	cin >> n >> a >> b;
	ll p, q, r, s;
	cin >> p >> q >> r >> s;

	for (ll i = p; i <= q; ++i)
	{
		for (ll j = r; j <= s; ++j)
		{
			ll k = i - a;
			if (k == j - b && max(1 - a, 1 - b) <= k && k <= min(n - a, n - b))
			{
				cout << "#";
			}
			else if (k == b - j && max(1 - a, b - n) <= k && k <= min(n - a, b - 1))
			{
				cout << "#";
			}
			else
			{
				cout << ".";
			}
		}
		cout << endl;
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
