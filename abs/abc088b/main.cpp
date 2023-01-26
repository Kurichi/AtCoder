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
    vector<int> v(N);
    rep(i, N) cin >> v[i];
    sort(v.rbegin(), v.rend());
    int alice = 0;
    int bob = 0;
    rep(i, N)
    {
        cerr << v[i] << endl;
        if (i % 2)
            bob += v[i];
        else
            alice += v[i];
    }
    cout << alice - bob << endl;

    return 0;
}