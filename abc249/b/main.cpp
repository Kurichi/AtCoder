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
    string s;
    cin >> s;

    bool flag = false;
    rep(i, s.size())
    {
        if ('A' <= s[i] && s[i] <= 'Z')
            flag = true;
    }
    if (!flag)
    {
        cout << "No" << endl;
        return 0;
    }
    flag = false;
    rep(i, s.size())
    {
        if ('a' <= s[i] && s[i] <= 'z')
            flag = true;
    }
    if (!flag)
    {
        cout << "No" << endl;
        return 0;
    }

    rep(i, s.size())
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}