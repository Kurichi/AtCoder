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
	int n, k;
	cin >> n >> k;
	vi ab(n * n), cd(n * n);
	{
		vi a(n);
		alin(a);
		rep(i, n)
		{
			int b;
			cin >> b;
			rep(j, n)
				ab[i * n + j] = a[j] + b;
		}
		alin(a);
		rep(i, n)
		{
			int b;
			cin >> b;
			rep(j, n)
				cd[i * n + j] = a[j] + b;
		}
	}
	sort(all(ab));
	sort(all(cd));

	int l = 0, r = cd.size() - 1;
	while (l < ab.size())
	{
		while (r >= 0 && ab[l] + cd[r] > k)
			--r;

		if (ab[l] + cd[r] == k)
		{
			cout << "Yes" << endl;
			return;
		}
		++l;
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
