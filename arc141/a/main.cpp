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
  int t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    string s = to_string(n);
    vector<string> v(s.size() / 2 + 1, "");
    ll MAX = 0;
    rep(i, s.size() / 2) {
      rep(j, i + 1) v[i] += s[j];

      string tmp;
      for (int j = v[i].size(); j <= s.size(); j += v[i].size()) tmp += v[i];

      ll x = stoll(tmp);
      if (x > n) {
        ll X = stoll(v[i]);
        X--;
        if (X == 0) X = 9;
        v[i] = to_string(X);
        tmp = "";
        for (int j = v[i].size(); j <= s.size(); j += v[i].size()) tmp += v[i];
        x = stoll(tmp);
      }
      if (x > n) x /= 10;
      mxin(MAX, x);
    }

    cout << MAX << endl;
  }
}

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(15);
  Main();
  return 0;
}