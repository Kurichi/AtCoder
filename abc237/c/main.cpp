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
    string s;
    cin >> s;
    auto ite_begin = s.begin();
    auto ite_end = s.end();
    while (*(--ite_end) == 'a')
    {
        if (ite_begin == ite_end)
        {
            cout << "Yes" << endl;
            return 0;
        }
        if (*ite_begin == 'a')
            ite_begin++;
        if (ite_begin == ite_end)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    // cout << *ite_begin << " " << *ite_end << endl;
    while (*ite_begin == *ite_end)
    {
        if (ite_begin == ite_end)
        {
            cout << "Yes" << endl;
            return 0;
        }
        ite_begin++;
        if (ite_begin == ite_end)
        {
            cout << "Yes" << endl;
            return 0;
        }
        ite_end--;
    }
    cout << "No" << endl;
    return 0;
}