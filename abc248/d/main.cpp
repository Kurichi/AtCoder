#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define inputAll(n, v) \
  for (int i = 0; i < n; i++) cin >> v[i];
#define all(v) (v).begin(), (v).end()
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vvi idx(n + 1);
  rep(i, n) {
    int x;
    cin >> x;
    idx[x].push_back(i);
  }

  int q;
  cin >> q;

  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;
    cout << lower_bound(all(idx[x]), r) - lower_bound(all(idx[x]), l - 1)
         << endl;
  }

  return 0;
}