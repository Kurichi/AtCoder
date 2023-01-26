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
    reverse(s.begin(), s.end());
    while (s.size() != 0)
    {
        if (s.substr(0, 6) == "resare")
            s = s.substr(6, s.size() - 6);
        else if (s.substr(0, 5) == "esare")
            s = s.substr(5, s.size() - 5);
        else if (s.substr(0, 7) == "remaerd")
            s = s.substr(7, s.size() - 7);
        else if (s.substr(0, 5) == "maerd")
            s = s.substr(5, s.size() - 5);
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}