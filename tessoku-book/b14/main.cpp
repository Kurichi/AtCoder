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
	vi v(n);
	alin(v);

	int half = n / 2;
	vi a1(1 << half), a2(1 << (n - half));
	rep(i, (1 << half))
	{
		int sum = 0;
		rep(j, half)
		{
			const int mask = 1 << j;
			if (i & mask)
				sum += v[j];
		}
		a1[i] = sum;
	}
	rep(i, (1 << (n - half)))
	{
		int sum = 0;
		rep(j, (n - half))
		{
			const int mask = 1 << j;
			if (i & mask)
				sum += v[half + j];
		}
		a2[i] = sum;
	}
	sort(all(a1));
	sort(all(a2));

	int l = 0, r = a2.size() - 1;
	while (l < a1.size())
	{
		while (r >= 0 && a1[l] + a2[r] > k)
			--r;

		if (a1[l] + a2[r] == k)
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
