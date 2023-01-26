#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (long long int i = 0; i < n; i++)
#define REP(i, x, n) for (long long int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)

int main()
{
    long long int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    x2 = abs(x1 - x2);
    y2 = abs(y1 - y2);
    x1 = min(x2, y2);
    y1 = max(x2, y2);
    pair<long long int, long long int> p(x1, y1);
    vector<pair<long long int, long long int>> p_list{
        make_pair(0, 0),
        make_pair(0, 2),
        make_pair(0, 4),
        make_pair(1, 1),
        make_pair(1, 3),
        make_pair(2, 4),
        make_pair(3, 3)};

    for (int i = 0; i < p_list.size(); i++)
    {
        if (p_list[i] == p)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}