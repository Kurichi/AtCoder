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
    int x[10] = {0};
    rep(i, s.size())
    {
        x[s[i] - '0']++;
    }
    rep(i, 10)
    {
        if (x[i] == 0)
            cout << i << endl;
    }
    return 0;
}