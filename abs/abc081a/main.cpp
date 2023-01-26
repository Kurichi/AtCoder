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
    char c;
    int x = 0;
    rep(i, 3)
    {
        cin >> c;
        x += c - '0';
    }
    cout << x << endl;
    return 0;
}