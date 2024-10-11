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

int n, m, s, t;
vector<int> ke[1005];
bool visited[1005];
int parent[1005];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (auto i : ke[v])
        {
            if (!visited[i])
            {
                q.push(i);
                parent[i] = v;
                visited[i] = true;
            }
        }
    }
}

void check(int s, int t)
{
    BFS(s);
    if (!visited[t])
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> res;
        while (t != s)
        {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for (auto i : res)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> m >> s >> t;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        memset(visited, false, sizeof(visited));
        check(s, t);
        memset(ke, 0, sizeof(ke));
        memset(parent, 0, sizeof(parent));
    }
}