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
    int T;
    cin >> T;
    rep(loop, T)
    {
        long long int a, s;
        cin >> a >> s;
        s -= a << 1;
        if (s < 0)
        {
            cout << "No" << endl;
            continue;
        }
        cout << ((a & s) ? "No" : "Yes") << endl;
    }
    return 0;
}