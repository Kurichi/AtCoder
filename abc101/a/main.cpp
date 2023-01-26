#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s;
    cin >> s;
    int n = 0;
    rep(i, 4)
    {
        if (s[i] == '+')
            n++;
        else
            n--;
    }
    cout << n << endl;
    return 0;
}