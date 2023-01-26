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
    char s1, s2, s3;
    char t1, t2, t3;
    cin >> s1 >> s2 >> s3;
    cin >> t1 >> t2 >> t3;

    map<char, int> mp, mp2;
    mp['R'] = mp['G'] = mp['B'] = 0;
    mp2 = mp;
    mp[s1]++;
    mp[s2]++;
    mp[s3]++;
    mp2[t1]++;
    mp2[t2]++;
    mp2[t3]++;
    if (mp['R'] != mp2['R'] || mp['G'] != mp2['G'] || mp['B'] != mp2['B'])
    {
        cout << "No" << endl;
        return 0;
    }

    int dif = 0;
    if (s1 != t1)
        dif++;
    if (s2 != t2)
        dif++;
    if (s3 != t3)
        dif++;

    if (dif == 0 || dif == 3)
        cout << "Yes" << endl;
    else
    {
        if (mp['R'] == 2 || mp['G'] == 2 || mp['B'] == 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}