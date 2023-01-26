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
    int N;
    cin >> N;
    vector<vector<bool>> s(N, vector<bool>(N));
    rep(i, N)
    {
        rep(j, N)
        {
            char x;
            cin >> x;
            if (x == '#')
                s[i][j] = 1;
            else
                s[i][j] = 0;
        }
    }
    rep(i, N)
    {
        rep(j, N)
        {
            int wcount = 0;
            // i方向
            wcount = 0;
            if (i < N - 5)
            {
                rep(k, 6)
                {
                    if (s[i + k][j] == 0)
                        wcount++;
                }
                if (wcount < 3)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }

            // j方向
            wcount = 0;
            if (j < N - 5)
            {
                rep(k, 6)
                {
                    if (s[i][j + k] == 0)
                        wcount++;
                }
                if (wcount < 3)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }

            if (i < N - 5 && j < N - 5)
            {
                // ij
                wcount = 0;
                rep(k, 6)
                {
                    if (s[i + k][j + k] == 0)
                        wcount++;
                }
                if (wcount < 3)
                {
                    cout << "Yes" << endl;
                    return 0;
                }

                // -ij
                wcount = 0;
                rep(k, 6)
                {
                    if (s[i + 5 - k][j + k] == 0)
                        wcount++;
                }
                if (wcount < 3)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;

    return 0;
}