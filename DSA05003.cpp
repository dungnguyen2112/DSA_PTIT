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

int f[105][105][105];
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        getchar();
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int max1 = 0;
        for (int i = 1; i <= s1.size(); i++)
        {
            for (int j = 1; j <= s2.size(); j++)
            {
                for (int k = 1; k <= s3.size(); k++)
                {
                    if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
                    {
                        f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
                    }
                    else
                    {
                        f[i][j][k] = max(f[i - 1][j][k], max(f[i][j - 1][k], f[i][j][k - 1]));
                    }
                    max1 = max(max1, f[i][j][k]);
                }
            }
        }
        cout << max1 << endl;
        memset(f, 0, sizeof(f));
    }
}