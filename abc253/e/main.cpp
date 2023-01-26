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
constexpr int MOD = 998244353;

void add(ll &a, ll &b) {
  a += b;
  a %= MOD;
}

ll front[5010];
ll back[5010];
ll dp[1001][5001];
void Main() {
  int n, m, K;
  cin >> n >> m >> K;

  rep(i, m) dp[0][i] = 1;
  REP(i, 1, n) {
    front[0] = dp[i - 1][0];
    back[m - 1] = dp[i - 1][m - 1];
    REP(j, 1, m) {
      front[j] = front[j - 1] + dp[i - 1][j] % MOD;
      back[m - j - 1] = back[m - j] + dp[i - 1][m - j - 1] % MOD;
    }
    rep(j, m) {
      if (j >= K) add(dp[i][j], front[j - K]);
      if (m > j + K) add(dp[i][j], back[j + K]);
      if (K == 0) dp[i][j] = (dp[i][j] + MOD - dp[i - 1][j]) % MOD;
    }
  }

  ll ans = 0;
  rep(i, m) add(ans, dp[n - 1][i]);

  cout << ans << endl;
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  Main();
  return 0;
}