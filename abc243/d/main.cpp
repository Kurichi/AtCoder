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
    ll x;
    string s;
    cin >> n >> x >> s;

    stack<char> sta;
    rep(i, n)
    {
        char c = s[i];
        if (c == 'U' && sta.size() && sta.top() != 'U')
            sta.pop();
        else
            sta.push(c);
    }
    stack<char> sta2;
    while (sta.size())
    {
        sta2.push(sta.top());
        sta.pop();
    }
    while (sta2.size())
    {
        char c = sta2.top();
        sta2.pop();
        if (c == 'U')
            x /= 2;
        else if (c == 'L')
            x *= 2;
        else
            x = x * 2 + 1;
    }

    cout << x << endl;

    return 0;
}