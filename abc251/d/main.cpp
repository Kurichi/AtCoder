#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define alin(n, v)              \
    for (int i = 0; i < n; i++) \
        cin >> prime[];
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
    int w;
    cin >> w;

    vi v;
    REP(i, 1, 101)
    {
        v.push_back(i);
        v.push_back(i * 100);
        v.push_back(i * 10000);
    }

    cout << v.size() << endl;
    for (auto a : v)
        cout << a << endl;

    return 0;
}
