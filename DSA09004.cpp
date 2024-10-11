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

vector<int> ke[1005];
bool visited[1005];
void DFS(int u)
{
    cout << u << ' ';
    visited[u] = true;
    for (auto i : ke[u])
    {
        if (!visited[i])
        {
            DFS(i);
        }
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m, u;
        cin >> n >> m >> u;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        memset(visited, false, sizeof(visited));
        DFS(u);
        memset(ke, 0, sizeof(ke));
        cout << endl;
    }
}