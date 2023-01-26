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

void Main()
{
    int n;
    cin >> n;
    vi a(n);
    alin(a);

    vector<pair<int, vector<int>>> num(200001);
    rep(i, n)
    {
        num[a[i]].first = a[i];
        num[a[i]]
            .second.push_back(i);
    }

    sort(all(num), [](const auto &l, const auto &r)
         { return l.second.size() > r.second.size(); });

    ll ans = 0;
    for (int j = 1; j < n - 1; j++)
    {
        ans += j * (n - j - 1);
        // cout << ans << endl;
        for (auto [i, v] : num)
        {
            if (v.size() < 2)
                break;
            if (i == a[j])
            {
                ans -= (lower_bound(all(v), j) - v.begin()) * (n - j - 1);
                ans -= (v.end() - upper_bound(all(v), j)) * j;
                // cout << i << " " << (lower_bound(all(v), j) - v.begin()) * (n - j - 1) << " " << (v.end() - upper_bound(all(v), j)) * j << endl;
            }
            else
            {
                // cout << i << " " << (lower_bound(all(v), j) - v.begin()) << " " << (v.end() - upper_bound(all(v), j)) << endl;
                ans -= (lower_bound(all(v), j) - v.begin()) * (v.end() - upper_bound(all(v), j));
            }
        }
        // cout << ans << endl;
        // cout << "\n";
    }
    cout << ans << endl;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}