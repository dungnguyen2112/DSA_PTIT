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
int parent[1005], ok[1005];

bool DFS(int u)
{
    ok[u] = 1;
    for (auto i : ke[u])
    {
        if (ok[i] == 0)
        {
            if (DFS(i))
            {
                return true;
            }
        }
        else if (ok[i] == 1)
        {
            return true;
        }
    }
    ok[u] = 2;
    return false;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
               memset(ok, 0, sizeof(ok));
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        int dem = 0;
        for (int i = 1; i <= n; i++)
        {
            if (DFS(i))
            {
                dem++;
            }
        }
        if(dem){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        memset(ok, 0, sizeof(ok));
        memset(ke, 0, sizeof(ke));
    }
}