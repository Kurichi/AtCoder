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
    int n;
    cin >> n;

    unordered_map<string, pair<int, int>> mp;
    pair<int, int> unused(0, 0);

    rep(i, n)
    {
        string s;
        int t;
        cin >> s >> t;
        if (mp[s] == unused)
            mp[s] = make_pair(i, t);
    }

    int maxi = 0;
    int maxt = -1;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        if ((itr->second).second > maxt)
        {
            maxi = itr->second.first;
            maxt = itr->second.second;
        }
        else if (itr->second.second == maxt && itr->second.first < maxi)
        {
            maxi = itr->second.first;
            maxt = itr->second.second;
        }
    }

    cout << maxi + 1 << endl;

    return 0;
}
