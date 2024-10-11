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
int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        int n = s.size();
        memset(f, false, sizeof(f));
        for (int i = 0; i < n; i++)
        {
            f[i][i] = true;
        }
        int res = 1;
        for (int k = 1; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                int j = i + k;
                if (s[i] == s[j] && k == 1)
                {
                    f[i][j] = 1;
                }
                else if (s[i] == s[j] && k > 1)
                {
                    f[i][j] = f[i + 1][j - 1];
                }
                else
                {
                    f[i][j] = 0;
                }
                if (f[i][j] == 1)
                {
                    res = max(res, j - i + 1);
                }
            }
        }
        cout << res << endl;
    }
}