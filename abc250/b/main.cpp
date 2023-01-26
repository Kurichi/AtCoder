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
    int n, a, b;
    cin >> n >> a >> b;

    vector<vector<bool>> area(n * a, vector<bool>(n * b));

    for (int i = 0; i < n * a; i++)
    {
        for (int j = 0; j < n * b; j++)
        {
            area[i][j] = ((i / a) + (j / b)) % 2;
            cout << (area[i][j] ? '#' : '.');
        }
        cout << endl;
    }

    return 0;
}
