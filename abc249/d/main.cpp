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
    int n;
    cin >> n;
    vi a(n);
    int M = 0;
    rep(i, n)
    {
        cin >> a[i];
        M = max(M, a[i]);
    }
    sort(all(a));

    vi v(M + 1, 0);
    rep(i, n)
        v[a[i]]++;

    vector<pair<int, int>> V;
    V.push_back(make_pair(a[0], 1));
    int index = 0;
    REP(i, 1, n)
    {
        if (a[i] == a[i - 1])
            V[index].second++;
        else
        {
            V.push_back(make_pair(a[i], 1));
            index++;
        }
    }

    ll count = 0;
    rep(i, V.size())
    {
        rep(j, V.size())
        {
            if (V[i].first * V[j].first > M)
                break;
            count += (ll)v[V[i].first * V[j].first] * V[i].second * V[j].second;
        }
    }

    cout << count << endl;

    return 0;
}