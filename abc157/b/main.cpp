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

void Main()
{
	vi v(9);
	alin(v);

	int n;
	cin >> n;
	while (n--)
	{
		int x;
		cin >> x;
		rep(i, 9)
		{
			if (x == v[i])
			{
				v[i] = 0;
			}
		}
	}

	vector<tuple<int, int, int>> x = {
		{0, 3, 6},
		{1, 4, 7},
		{2, 5, 8},
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8},
		{0, 4, 8},
		{2, 4, 6}};

	for (const auto [a, b, c] : x)
	{
		if (v[a] + v[b] + v[c] == 0)
		{
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	Main();
	return 0;
}
