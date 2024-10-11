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

int f[1005];
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, s;
        cin >> n >> s;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        f[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (j >= a[i] && f[j] == 0 && f[j - a[i]] == 1)
                {
                    f[j] = 1;
                }
            }
        }
        if (f[s])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        memset(f, 0, sizeof(f));
    }
}
