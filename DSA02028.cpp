#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;
int n, k;
int a[15];
int res = 0;

void Try(int x, int l, int r, int k)
{
    if (l > r)
        return;
    if (k == 1)
    {
        if (a[r] - a[l - 1] == x)
            res += 1;
        return;
    }
    for (int i = l; i <= r; ++i)
    {
        if (a[i] - a[l - 1] == x)
            Try(x, i + 1, r, k - 1);
    }
}

void testCase()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    if (k == 1)
        res = 1;
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            int x = a[i];
            Try(x, i + 1, n, k - 1);
        }
    }
    cout << res;
}

int main()
{
    testCase();
    cout << "\n";
}