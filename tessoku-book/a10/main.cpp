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
    int n;
    cin >> n;

    vi v(n);
    alin(v);

    vi L(n, 0), R(n, 0);
    L[0] = v[0];
    for (int i = 1; i < n; ++i)
        L[i] = max(L[i - 1], v[i]);

    R[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; --i)
        R[i] = max(R[i + 1], v[i]);

    // rep(i, n) cout << L[i] << " ";
    // cout << endl;
    // rep(j, n) cout << v[j] << " ";
    // cout << endl;

    int d;
    cin >> d;
    while (d--)
    {
        int l, r;
        cin >> l >> r;
        cout << max(L[l - 2], R[r]) << endl;
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
