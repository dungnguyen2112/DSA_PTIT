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

long long f[105];
long long a[15];
const long long mod = 1e9 + 7;
int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        long long n;
        cin >> n;
        for (int i = 1; i < 10; i++)
        {
            a[i] = 1;
        }
        f[1] = 10;
        for (int i = 2; i <= 100; ++i)
        {
            for (int j = 1; j <= 9; ++j)
            {
                long long s = 0;
                for (int k = j; k <= 9; ++k)
                    s += a[k];
                a[j] = s;
                f[i] = (f[i] + s) % mod;
            }
        }
        for (int i = 2; i <= 100; ++i)
        {
            f[i] = (f[i] + f[i - 1]) % mod;
        }
        cout << f[n] << endl;
        memset(f, 0, sizeof(f));
        memset(a, 0, sizeof(a));
    }
}