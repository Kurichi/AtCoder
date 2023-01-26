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
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    v %= (a + b + c);
    if (v < a)
    {
        cout << "F" << endl;
        return 0;
    }
    v -= a;
    if (v < b)
    {
        cout << "M" << endl;
        return 0;
    }
    cout << "T" << endl;

    return 0;
}