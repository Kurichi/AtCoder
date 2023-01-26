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
    int N;
    cin >> N;

    vi A(N), B(N);
    REP(i, 1, N)
    cin >> A[i];
    REP(i, 2, N)
    cin >> B[i];

    vi r(N);
    r[0] = -1;
    r[1] = 0;

    vi dp(N);
    dp[0] = 0;
    dp[1] = A[1];

    REP(i, 2, N)
    {
        if (dp[i - 1] + A[i] < dp[i - 2] + B[i])
        {
            dp[i] = dp[i - 1] + A[i];
            r[i] = i - 1;
        }
        else
        {
            dp[i] = dp[i - 2] + B[i];
            r[i] = i - 2;
        }
    }

    stack<int> stk;
    // stk.push(N - 1);
    int x = N - 1;
    while (x != -1)
    {
        stk.push(x + 1);
        x = r[x];
    }

    cout << stk.size() << endl;
    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
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
