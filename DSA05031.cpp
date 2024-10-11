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

int main()
{
    faster()
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        vector<int> f(n + 5, 0);
            for (int i = 1; i <= n; i++)
            {
                f[i] = i;
                for (int j = 1; j <= sqrt(i); j++)
                {
                    f[i] = min(f[i], f[i - j * j] + 1);
                }
            }
            cout << f[n] << endl;
    }
}