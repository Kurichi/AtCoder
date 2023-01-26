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
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    REP(i, 1, N + 1)
    {
        int v = (i % 10) + (i % 100) / 10 + (i % 1000) / 100 + (i % 10000) / 1000 + i / 10000;
        cerr << i << " " << v << endl;
        if (A <= v && v <= B)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}