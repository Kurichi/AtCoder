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
    vector<pair<int, int>> choco(n), box(m);

    rep(i, n)
            cin >>
        choco[i].first;
    rep(i, n)
            cin >>
        choco[i].second;
    rep(i, m)
            cin >>
        box[i].first;
    rep(i, m)
            cin >>
        box[i].second;

    sort(all(choco));
    sort(all(box));

    for (int i = 0, j = 0; i < n; i++)
    {
        bool flag = true;
        while (flag && j < m)
        {
            if (choco[i].first <= box[j].first && choco[i].second <= box[j].second)
                flag = false;
            j++;
        }
        if (flag)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}