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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}
int tongchuso(int n)
{
    int tong = 0;
    while (n)
    {
        int d = n % 10;
        n /= 10;
        tong += d;
    }
    return tong;
}
int main()
{
    int n, m;
    cin >> m >> n;
    int l = n;
    if (n <= 0 || n > 9 * m)
    {
        cout << -1 << ' ';
    }
    else
    {
        string s(m, '0');
        s[0] = '1';
        n -= 1;
        for (int i = m - 1; i >= 0; i--)
        {
            int d = s[i] - '0';
            if (n >= 9 - d)
            {
                s[i] = '9';
                n -= 9 - d;
            }
            else
            {
                s[i] += n;
                break;
            }
        }
        cout << s << ' ';
    }
    if (l <= 0 || l > 9 * m)
    {
        cout << -1;
    }
    else
    {
        string s1(m, '0');
        for (int i = 0; i < m; i++)
        {
            int d = s1[i] - '0';
            if (l >= 9 - d)
            {
                s1[i] = '9';
                l -= 9 - d;
            }
            else
            {
                s1[i] += l;
                break;
            }
        }
        cout << s1;
    }
}