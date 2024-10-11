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

int f[100005];
const int mod = 1e9 + 7;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m;
        cin >> n >> m;
        int tmp = 0;
        for (int i = 1; i <= m; i++)
        {
            f[i] = (tmp + 1) % mod;
            tmp += f[i];
            tmp %= mod;
        }
        for (int i = m + 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                f[i] = f[i] % mod + f[i - j] % mod;
                f[i] %= mod;
            }
        }
        cout << f[n] << endl;
        memset(f, 0, sizeof(f));
    }
}
