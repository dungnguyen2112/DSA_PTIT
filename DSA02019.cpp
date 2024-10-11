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
int n, m, max1;
vector<int> ke[1005];
int visited[1005][1005];
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
void DFS(int u, int len)
{
    max1 = max(max1, len);
    for (auto i : ke[u])
    {
        if (!visited[u][i])
        {
            visited[u][i] = visited[i][u] = true;
            DFS(i, len + 1);
            visited[u][i] = visited[i][u] = false;
        }
    }
}
int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        nhap();
        max1 = 0;
        for (int i = 1; i <= n; i++)
        {
            DFS(i, 0);
        }
        cout << max1 << endl;
        memset(ke, 0, sizeof(ke));
    }
}