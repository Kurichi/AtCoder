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
    int a, b, c;
    int x;
    cin >> a >> b >> c;
    cin >> x;

    int count = 0;
    rep(i, a + 1)
    {
        rep(j, b + 1)
        {
            rep(k, c + 1)
            {
                int total = i * 500 + j * 100 + k * 50;
                if (total == x)
                    count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}