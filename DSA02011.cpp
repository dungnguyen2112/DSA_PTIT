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
int a[105], sum, n, s;
void Try(int i, int limit, int dem)
{
    if (i == n || limit >= s || dem > sum)
    {
        if (limit == s)
        {
            sum = min(sum, dem);
        }
        return;
    }
    Try(i + 1, limit, dem);
    Try(i + 1, limit + a[i], dem + 1);
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> s;
        sum = 1e9;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        Try(0, 0, 0);
        if (sum != 1e9)
        {
            cout << sum << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}