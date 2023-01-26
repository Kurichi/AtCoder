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
    int N, Y;
    cin >> N >> Y;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N - i; j++)
        {
            for (int k = 0; k <= N - i - j; k++)
            {
                int total = i * 10000 + j * 5000 + k * 1000;
                if (i + j + k == N && total == Y)
                {
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}