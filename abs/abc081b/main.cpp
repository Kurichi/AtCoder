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
    int n;
    cin >> n;
    int b = 0;
    int x;
    rep(i, n)
    {
        cin >> x;
        b = b | x;
    }
    rep(i, 100000)
    {
        if (b & (1 << i))
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}