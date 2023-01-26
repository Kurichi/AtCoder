#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> p(1);

    p[0] = 2;
    for (int i = 3; i <= b + d; i += 2)
    {
        for (int j = 0; j < p.size(); j++)
        {
            if (i % p[j] == 0)
                break;
            if (p[j] * p[j] > i)
            {
                p.push_back(i);
                break;
            }
        }
    }

    vector<bool> P(201, false);
    for (int i = 0; i < p.size(); i++)
        P[p[i]] = true;

    for (int i = a; i <= b; i++)
    {
        bool flag = true;
        for (int j = c; j <= d; j++)
        {
            if (P[i + j])
                flag = false;
        }
        if (flag)
        {
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
    return 0;
}