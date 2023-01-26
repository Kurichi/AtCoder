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
    vi A(n), B(n);
    inputAll(n, A);
    inputAll(n, B);

    int one = 0;
    rep(i, n)
    {
        if (A[i] == B[i])
            one++;
    }
    int two = 0;
    rep(i, n)
    {
        rep(j, n)
        {
            if (i == j)
                continue;
            if (A[i] == B[j])
                two++;
        }
    }

    cout << one << endl;
    cout << two << endl;

    return 0;
}