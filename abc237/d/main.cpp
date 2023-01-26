#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define MAX(a, b) (a > b) ? (a) : (b)
#define MIN(a, b) (a < b) ? (a) : (b)

struct node
{
    int value;
    struct node *left;
    struct node *right;
} typedef NODE;

int main()
{
    int N;
    cin >> N;
    string s;
    cin >> s;

    NODE *begin = new NODE;
    begin->value = -1;
    NODE *end = new NODE;
    end->value = -1;

    begin->right = end;
    end->left = begin;

    NODE *n = new NODE;
    n->value = 0;
    n->left = begin;
    n->right = begin->right;
    begin->right = n;

    rep(i, N)
    {
        NODE *a = new NODE;
        a->value = i + 1;
        if (s[i] == 'L')
        {
            a->right = n;
            a->left = n->left;
            n->left->right = a;
            n->left = a;
        }
        else
        {
            a->left = n;
            a->right = n->right;
            n->right->left = a;
            n->right = a;
        }
        n = a;
    }

    n = begin->right;
    while (1)
    {
        cout << n->value;
        n = n->right;
        if (n != end)
            cout << " ";
        else
            break;
    }
    cout << endl;

    return 0;
}