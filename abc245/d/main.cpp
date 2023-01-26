#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define inputAll(n, v)          \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define all(v) (v).begin(), (v).end()
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vi a(n + 1), c(n + m + 1);
    inputAll(n + 1, a);
    inputAll(n + m + 1, c);
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

    return 0;
}