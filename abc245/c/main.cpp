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
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    inputAll(n, a);
    inputAll(n, b);

    ll A = a[0], B = b[0];
    ll newA, newB;
    for (int i = 1; i < n; i++)
    {

        if ((A < 0 || abs(a[i] - A) > k) && (B < 0 || abs(a[i] - B) > k))
            newA = -1;
        else
            newA = a[i];

        if ((A < 0 || abs(b[i] - A) > k) && (B < 0 || abs(b[i] - B) > k))
            newB = -1;
        else
            newB = b[i];

        A = newA;
        B = newB;
        if (A < 0 && B < 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}