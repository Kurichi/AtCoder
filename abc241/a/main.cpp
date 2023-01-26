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
    vector<int> v(10);
    rep(i, 10)
            cin >>
        v[i];
    int n = v[0];
    n = v[n];
    n = v[n];
    cout << n << endl;
    return 0;
}