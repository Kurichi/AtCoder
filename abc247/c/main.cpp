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
    vi str(1, 1);
    for (int i = 2; i <= n; i++)
    {
        vi cpy = str;
        str.push_back(i);
        str.insert(str.end(), all(cpy));
    }
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
        if (i != str.size() - 1)
            cout << " ";
        else
            cout << endl;
    }
    return 0;
}