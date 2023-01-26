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
    vector<string> s(n);
    rep(i, n)
            cin >>
        s[i];

    int MAX = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        vi alpha(26, 0);
        for (int j = 0; j < n; j++)
        {
            int mask = (1 << j);
            if (!(i & mask))
                continue;
            for (auto c : s[j])
                alpha[c - 'a']++;
        }
        int count = 0;
        rep(j, 26) if (alpha[j] == k)
            count++;
        MAX = max(MAX, count);
    }

    std::cout << MAX << endl;

    return 0;
}