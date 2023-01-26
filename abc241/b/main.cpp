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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    rep(i, n) cin >> v[i];
    rep(i, m)
    {
        int x;
        cin >> x;
        rep(j, n)
        {
            if (x == v[j])
            {
                v[j] = -1;
                break;
            }
            else if (j == n - 1)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}