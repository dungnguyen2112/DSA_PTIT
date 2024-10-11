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
        string s;
        cin >> s;
        string s1 = s;
        reverse(s1.begin(), s1.end());
        int f[s.size() + 5][s.size() + 5] = {};
        int max1 = -1;
        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = 1; j <= s1.size(); j++)
            {
                if (s[i - 1] == s1[j - 1])
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
        cout << s.size() -  max1 << endl;
    }
}
