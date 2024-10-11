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

long long f[1005][1005];
long long mod = 1e9 + 7;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long n, k;
        cin >> n >> k;
        for (int i = 1; i <= 1000; i++)
        {
            f[i][1] = i;
        }
        for (int i = 2; i <= 1000; i++)
        {
            for (int j = 2; j <= i; j++)
            {
                f[i][j] = i * f[i - 1][j - 1];
                f[i][j] %= mod;
            }
        }
        cout << f[n][k] << endl;
        memset(f, 0, sizeof(f));
    }
}