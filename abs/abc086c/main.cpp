#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)

struct point
{
    int t;
    int x;
    int y;
} typedef POINT;

int main()
{
    int N;
    cin >> N;
    vector<POINT> p(N);

    rep(i, N) cin >> p[i].t >> p[i].x >> p[i].y;
    POINT P;
    P.t = P.x = P.y = 0;
    p.insert(p.begin(), P);

    rep(i, N)
    {
        POINT P = p[i + 1];
        P.t -= p[i].t;
        P.x -= p[i].x;
        P.y -= p[i].y;

        int X = P.t - abs(P.x) - abs(P.y);
        if (X < 0 || X % 2)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}