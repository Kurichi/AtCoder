#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)

int main()
{
    int N;
    cin >> N;
    stack<pair<int, int>> s;

    int x;
    int high = 0;
    rep(i, N)
    {
        cin >> x;
        high++;
        if (s.empty())
            s.push(make_pair(x, 1));
        else if (s.top().first == x)
            s.top().second++;
        else
            s.push(make_pair(x, 1));
        if (s.top().first == s.top().second)
        {
            high -= s.top().first;
            s.pop();
        }
        cout << high << endl;
    }

    return 0;
}