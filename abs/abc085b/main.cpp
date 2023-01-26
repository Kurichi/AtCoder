#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)

int main()
{
    int N;
    cin >> N;
    set<int> s;
    rep(i, N)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    return 0;
}