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
    long long int K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> AmodN(N);
    rep(i, N)
    {
        cin >> A[i];
        AmodN[i] = A[i] % N;
    }

    vector<pair<int, int>> counter(N, make_pair(-1, -1));

    long long int point = 0;
    rep(i, K)
    {
        if (counter[point].first == -1)
            counter[point].first = i;
        else if (counter[point].second == -1)
            counter[point].second = i;
        else
            break;
        point = (point + AmodN[point]) % N;
    }
    long long int ans = 0;
    int loop = 0;
    rep(i, N)
    {
        if (counter[i].first == -1)
            continue;
        else if (counter[i].second == -1)
        {
            ans += A[i];
            counter[i].first = -1;
        }
        else
            loop++;
    }
    rep(i, N)
    {
        if (counter[i].first == -1)
            continue;
        ans += A[i] * ((K - counter[i].first + loop - 1) / loop);
    }

    cout << ans << endl;
    return 0;
}
