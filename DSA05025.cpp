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

vector<long long> f;
const int mod = 1e9 + 7;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        f.resize(n+5);
        int tmp = 0;
        for (int i = 1; i <= min(3, n); i++)
        {
            f[i] = (tmp + 1);
            tmp += f[i];
        }
        for (int i = 4; i <= n; i++)
        {
            for (int j = 1; j <= min(3, n); j++)
            {
                f[i] = f[i] + f[i - j];
            }
        }
        cout << f[n] << endl;
        f.clear();
    }
}
