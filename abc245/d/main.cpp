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
    int n, m;
    cin >> n >> m;
    vi a(n + 1), c(n + m + 1);
    alin(a);
    alin(c);
    reverse(all(a));
    reverse(all(c));

    stack<int> answer;
    rep(mi, m + 1)
    {
        int ans = c[mi] / a[0];
        rep(i, n + 1)
            c[mi + i] -= a[i] * ans;
        answer.push(ans);
    }
    while (!answer.empty())
    {
        cout << answer.top();
        answer.pop();
        if (!answer.empty())
            cout << " ";
    }
    cout << endl;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    Main();
    return 0;
}
