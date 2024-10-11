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

const int mod = 1e9 + 7;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        vector<int> f;
        f.resize(k + 5);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        f[0] = 1;
        for (int i = 1; i <= k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i >= a[j])
                {
                    f[i] = f[i] + f[i - a[j]];
                    f[i] %= mod;
                }
            }
        }
        cout << f[k] << endl;
        f.clear();
    }
}