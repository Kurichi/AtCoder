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
    int a, b;
    cin >> a >> b;
    if ((a & b) & 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;
    return 0;
}