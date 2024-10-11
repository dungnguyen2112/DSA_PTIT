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
    int n;
    cin >> n;
    queue<pair<int, int>> q;
    q.push({n, 0});
    while (!q.empty())
    {
        pair<int, int> k = q.front();
        q.pop();
        if (k.first == 1)
        {
            cout << k.second << endl;
            return;
        }
        if (k.first % 2 == 0)
        {
            q.push({k.first / 2, k.second + 1});
        }
        if (k.first % 3 == 0)
        {
            q.push({k.first / 3, k.second + 1});
        }
        q.push({k.first - 1, k.second + 1});
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