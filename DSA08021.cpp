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
    int n, m;
    cin >> n >> m;
    int a[n + 5][m + 5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 1}, 0});
    vector<vector<bool>> vs(n + 1, vector<bool>(m + 1, 0));
    while (!q.empty())
    {
        pair<pair<int, int>, int> p = q.front();
        q.pop();
        int i = p.first.first;
        int j = p.first.second;
        if (i == n && j == m)
        {
            cout << p.second << endl;
            return;
        }
        if (i + a[i][j] <= n && vs[i + a[i][j]][j] == 0)
        {
            vs[i + a[i][j]][j] = 1;
            q.push({{i + a[i][j], j}, p.second + 1});
        }
        if (j + a[i][j] <= m && vs[i][j + a[i][j]] == 0)
        {
            vs[i][j + a[i][j]] = 1;
            q.push({{i, j + a[i][j]}, p.second + 1});
        }
    }
    cout << -1 << endl;
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