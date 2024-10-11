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
        return a.second < b.second;
    }
    return a.first < b.first;
}
int f[105];
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        pair<int, int> v[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        sort(v + 1, v + n + 1);
        int max1 = 1;
        for (int i = 1; i <= n; i++)
        {
            f[i] = 1;
            for (int j = 1; j < i; j++)
            {
                if (v[i].first > v[j].second)
                {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
            max1 = max(max1, f[i]);
        }
        cout << max1 << endl;
        memset(f, 0, sizeof(f));
    }
}