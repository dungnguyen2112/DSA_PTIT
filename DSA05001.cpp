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
    int x;
    cin >> x;
    while (x--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int max1 = 0;
        for (int i = 1; i <= s1.size(); i++)
        {
            for (int j = 1; j <= s2.size(); j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    f[i][j] = f[i - 1][j - 1] + 1;
                }
                else
                {
                    f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                }
                max1 = max(max1, f[i][j]);
            }
        }
        cout << max1 << endl;
        memset(f, 0, sizeof(f));
    }
}