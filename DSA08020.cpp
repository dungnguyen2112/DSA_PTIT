#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

int prime[10005];
void sang()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i <= sqrt(10000); i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

int chuanhoa(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum = sum * 10 + (s[i] - '0');
    }
    return sum;
}

void solve()
{
    string n, k;
    cin >> n >> k;
    queue<pair<string, int>> q;
    q.push({n, 0});
    map<int, int> mp;
    while (!q.empty())
    {
        pair<string, int> t = q.front();
        q.pop();
        string x = t.first;
        int y = t.second;
        if (x == k)
        {
            cout << y << endl;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if ((i == 0 && j == 0) || j == (x[i] - '0'))
                    continue;
                string tmp = x;
                tmp[i] = j + '0';
                int m = chuanhoa(tmp);
                if (!prime[m] && mp[m] == 0)
                {
                    mp[m] = 1;
                    q.push({tmp, y + 1});
                }
            }
        }
    }
}

int main()
{
    sang();
    faster() int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}