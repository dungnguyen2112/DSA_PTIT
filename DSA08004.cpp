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
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<int, int> mp;
    for (auto i : s)
        mp[i]++;
    priority_queue<int> q;
    for (auto i : mp)
    {
        if (i.second > 0)
            q.push(i.second);
    }
    while (k--)
    {
        if (q.empty())
            break;
        int x = q.top();
        q.pop();
        x--;
        q.push(x);
    }
    long long ans = 0;
    while (!q.empty())
    {
        long long x = q.top();
        q.pop();
        ans += x * x;
    }
    cout << ans;
}

int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        solve();
        cout << endl;
    }
    return 0;
}