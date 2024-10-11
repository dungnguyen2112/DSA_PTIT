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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int f1[n + 5] = {0}, f2[n + 5] = {0};
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > a[i - 1])
                f1[i] = f1[i - 1] + 1;
            else
                f1[i] = 1;
        }
        for (int i = n; i >= 1; i--)
        {
            if (a[i] > a[i + 1])
                f2[i] = f2[i + 1] + 1;
            else
                f2[i] = 1;
        }
        int max1 = -1e9;
        for (int i = 1; i <= n; i++)
        {
            max1 = max(max1, f1[i] + f2[i] - 1);
        }
        cout << max1 << endl;
    }
}