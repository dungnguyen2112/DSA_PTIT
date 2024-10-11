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

void solve()
{
    int s, t;
    cin >> s >> t;
    queue<pair<int, int>> q;
    q.push({s, 0});
    map<int, int> mp;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        if (p.first == t)
        {
            cout << p.second << endl;
            return;
        }
        if (p.first - 1 == t || p.first * 2 == t)
        {
            cout << p.second + 1 << endl;
            return;
        }
        if (p.first - 1 > 0 && mp[p.first - 1] == 0)
        {
            q.push({p.first - 1, p.second + 1});
            mp[p.first - 1] = 1;
        }
        if (p.first * 2 <= t * 2 && mp[p.first * 2] == 0)
        {
            q.push({p.first * 2, p.second + 1});
            mp[p.first * 2] = 1;
        }
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}