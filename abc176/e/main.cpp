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
	int H, W, m;
	cin >> H >> W >> m;

	vi h(H, 0), w(W, 0);
	vector<pii> bomb(m);
	while (m--)
	{
		int _h, _w;
		cin >> _h >> _w;
		bomb[m] = make_pair(_h - 1, _w - 1);

		h[_h - 1]++;
		w[_w - 1]++;
	}

	int max_h = max_element(all(h)) - h.begin();
	int max_w = max_element(all(w)) - w.begin();

	int flag = 0;
	for (const auto &p : bomb)
	{
		if (p.first == max_h && p.second == max_w)
			flag = 1;
	}

	cout << h[max_h] + w[max_w] - flag << endl;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(15);
	Main();
	return 0;
}
