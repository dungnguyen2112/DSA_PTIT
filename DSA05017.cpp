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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int f1[n + 5], f2[n + 5];
        for (int i = 0; i < n; i++)
        {
            f1[i] = a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    f1[i] = max(f1[i], f1[j] + a[i]);
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            f2[i] = a[i];
            for (int j = n - 1; j > i; j--)
            {
                if (a[i] > a[j])
                {
                    f2[i] = max(f2[i], f2[j] + a[i]);
                }
            }
        }
        int max1 = -1e9;
        for (int i = 0; i < n; i++)
        {
            max1 = max(max1, f1[i] + f2[i] - a[i]);
        }
        cout << max1 << endl;
    }
}