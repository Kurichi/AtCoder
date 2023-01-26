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
	int h, w, n;
	cin >> h >> w >> n;

	vvi v(h + 1, vi(w + 1, 0));

	while (n--)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		++v[a - 1][b - 1];
		--v[a - 1][d];
		--v[c][b - 1];
		++v[c][d];
	}

	rep(i, h) rep(j, w)
	{
		v[i][j + 1] += v[i][j];
	}
	rep(i, h) rep(j, w)
	{
		v[i + 1][j] += v[i][j];
	}

	rep(i, h)
	{
		rep(j, w)
				cout
			<< v[i][j] << " ";
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
