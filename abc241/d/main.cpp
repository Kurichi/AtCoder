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
    int Q;
    cin >> Q;
    int n, k;
    long long int x;
    multiset<long long int> s;
    auto it = s.begin();
    rep(I, Q)
    {
        cin >> n >> x;

        switch (n)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            cin >> k;
            it = s.upper_bound(x);
            if (distance(s.begin(), it) < k)
                cout << -1 << endl;
            else
            {
                rep(i, k) it--;
                cout << *it << endl;
            }
            break;
        case 3:
            cin >> k;
            it = s.lower_bound(x);
            if (distance(it, s.end()) < k)
                cout << -1 << endl;
            else
            {
                rep(i, k - 1) it++;
                cout << *it << endl;
            }
            break;
        }
    }
    return 0;
}