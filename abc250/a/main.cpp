#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define alin(n, v)              \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define all(v) (v).begin(), (v).end()
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
using vl = vector<ll>;
using vll = vector<vl>;

int main()
{
    int h, w, r, c;
    cin >> h >> w >> r >> c;

    int cnt = 4;
    if (r == 1)
        cnt--;
    if (r == h)
        cnt--;
    if (c == 1)
        cnt--;
    if (c == w)
        cnt--;

    cout << cnt << endl;

    return 0;
}