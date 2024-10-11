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

void solve()
{
    int n;
    cin >> n;
    queue<pair<int, int>> q;
    map<int, int> mp;
    q.push({n, 0});
    while (!q.empty())
    {
        pair<int, int> t = q.front();
        q.pop();
        if (t.first == 1)
        {
            cout << t.second << endl;
            return;
        }
        if (t.first == 2)
        {
            cout << t.second + 1 << endl;
            return;
        }
        for (int i = 2; i <= sqrt(t.first); i++)
        {
            if (t.first % i == 0 && !(mp[t.first / i]))
            {
                mp[t.first / i] = 1;
                q.push({t.first / i, t.second + 1});
            }
        }
        if (t.first - 1 >= 1 && !mp[t.first - 1])
        {
            mp[t.first - 1] = 1;
            q.push({t.first - 1, t.second + 1});
        }
    }
}

int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}