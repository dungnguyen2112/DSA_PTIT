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
long long mul = 1e9 + 7;
int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long max1 = 0, max2 = 0;
        if (k <= n - k)
        {
            for (int i = 0; i < k; i++)
            {
                max1 += a[i];
            }
            for (int i = k; i < n; i++)
            {
                max2 += a[i];
            }
        }
        else
        {
            for (int i = 0; i < n - k; i++)
            {
                max1 += a[i];
            }
            for (int i = n - k; i < n; i++)
            {
                max2 += a[i];
            }
        }
        cout << max2 - max1 << endl;
    }
}