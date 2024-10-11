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

int f[1005][1005];
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m;
        cin >> n >> m;
        int w[n + 5], v[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> w[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (j >= w[i])
                {
                    f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
                }
                else
                {
                    f[i][j] = f[i - 1][j];
                }
            }
        }
        cout << f[n][m] << endl;
        memset(f, 0, sizeof(f));
    }
}
