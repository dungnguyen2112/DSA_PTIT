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
const int mod = 1e9 + 7;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, s;
        cin >> n >> s;
        for (int i = 0; i <= 1000; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == i || j == 0)
                {
                    f[i][j] = 1;
                }
                else if (j == 1)
                {
                    f[i][j] = i;
                }
                else
                {
                    f[i][j] = f[i - 1][j - 1] % mod + f[i - 1][j] % mod;
                    f[i][j] %= mod;
                }
            }
        }
        cout << f[n][s] << endl;
        memset(f, 0, sizeof(f));
    }
}
