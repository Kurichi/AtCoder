#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define alin(v) \
  for (auto &a : v) cin >> a;
#define all(v) (v).begin(), (v).end()
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
#define F first;
#define S second;
#define grei \
  greater<int> {}
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

void Main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll ab = lcm(a, b);

  ll sum_all = n * (1 + n) / 2;
  ll a_sum = (n / a) * (a + n / a * a) / 2;
  ll b_sum = (n / b) * (b + n / b * b) / 2;
  ll ab_sum = (n / ab) * (ab + n / ab * ab) / 2;

  cout << sum_all - a_sum - b_sum + ab_sum << endl;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  Main();
  return 0;
}