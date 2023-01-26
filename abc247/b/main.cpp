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
    vector<pair<string, string>> names(n);
    rep(i, n)
            cin >>
        names[i].first >> names[i].second;

    set<string> used;
    rep(i, n)
    {
        bool flag = true;
        rep(j, n)
        {
            if (i == j)
                continue;
            if (names[i].first == names[j].first || names[i].first == names[j].second)
                flag = false;
        }
        if (flag)
            continue;
        flag = true;
        rep(j, n)
        {
            if (i == j)
                continue;
            if (names[i].second == names[j].first || names[i].second == names[j].second)
                flag = false;
        }
        if (!flag)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}