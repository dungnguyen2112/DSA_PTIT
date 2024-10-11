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
    int x;
    cin >> x;
    while (x--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n + 5] = {}, b[m + 5] = {}, c[n + m + 5] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                c[i + j] += (a[i] * b[j]);
            }
        }
        for (int i = 0; i < n + m - 1; i++)
        {
            cout << c[i] << ' ';
        }
        cout << endl;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));
    }
}
