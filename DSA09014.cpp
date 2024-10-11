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

int n, m;
vector<int> ke[1005];
bool visited[1005];
int parent[1005];
void nhap()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
bool DFS(int u)
{
    visited[u] = true;
    for (auto i : ke[u])
    {
        if (!visited[i])
        {
            parent[i] = u;
            if (DFS(i))
            {
                return true;
            }
        }
        else if (i != parent[u])
        {
            return true;
        }
    }
    return false;
}
int dem, dem1;
void check(int s, int t)
{
    memset(visited, false, sizeof(visited));
    DFS(s);
    if (visited[t])
    {
        dem++;
    }
    else
    {
        dem1++;
    }
}
int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        dem = dem1 = 0;
        nhap();
        for (int i = 1; i <= n; i++)
        {
            memset(visited, false, sizeof(visited));
            if (DFS(i))
            {
                dem++;
            }
        }
        if (dem)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        memset(ke, 0, sizeof(ke));
        memset(parent, 0, sizeof(parent));
        // cout << endl;
    }
}