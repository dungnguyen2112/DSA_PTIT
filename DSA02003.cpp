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
int n, a[15][15];
vector<string> v;

void Try(int i, int j, string s)
{
    if (i == n && j == n)
    {
        v.push_back(s);
        return;
    }
    if (i < n && a[i + 1][j] == 1)
        Try(i + 1, j, s + 'D');
    if (j < n && a[i][j + 1] == 1)
        Try(i, j + 1, s + 'R');
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    if (a[1][1] == 0 || a[n][n] == 0)
    {
        cout << "-1" << endl;
        return;
    }
    Try(1, 1, "");
    if (v.empty())
    {
        cout << "-1" << endl;
        return;
    }
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
    v.clear();
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