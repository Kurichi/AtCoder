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
    vector<string> str(n);
    map<string, int> mp;

    inputAll(n, str);
    int j = 0;
    rep(i, m)
    {
        string s;
        cin >> s;
        while (str[j] != s)
        {
            cout << "No" << endl;
            j++;
        }
        cout << "Yes" << endl;
        j++;
    }

    return 0;
}