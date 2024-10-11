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
    int x;
    cin >> x;
    while (x--)
    {
        int n, m;
        cin >> n >> m;
        if (m * 9 < n)
        {
            cout << -1 << endl;
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
            cout << s << endl;
        }
    }
}