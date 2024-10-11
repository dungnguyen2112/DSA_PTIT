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

// int n, k;
// int a[30];
// vector<string> temp;
// vector<vector<string>> res;

// void solve()
// {
//     vector<string> x;
//     for (int i = 1; i <= k; ++i)
//     {
//         x.push_back(temp[a[i]]);
//     }
//     sort(x.begin(), x.end());
//     res.push_back(x);
// }

// void Try(int i)
// {
//     for (int j = a[i - 1] + 1; j <= n - k + i; ++j)
//     {
//         a[i] = j;
//         if (i == k)
//             solve();
//         else
//             Try(i + 1);
//     }
// }

// void testCase()
// {
//     cin >> n >> k;
//     set<string> mp;
//     for (int i = 1; i <= n; ++i)
//     {
//         string s;
//         cin >> s;
//         mp.insert(s);
//     }
//     temp.push_back("");
//     for (auto i : mp)
//     {
//         temp.push_back(i);
//     }
//     n = temp.size() - 1;
//     Try(1);
//     sort(res.begin(), res.end());
//     for (auto i : res)
//     {
//         for (string j : i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     testCase();
// }
// int n, m, u, v, res;
// vector<vector<int>> G;
// bool vs[20][20] = {};

// void dfs(int u, int len)
// {
//     res = max(res, len);
//     for (int v : G[u])
//     {
//         if (!vs[u][v])
//         {
//             cout << u << ' ' << v << endl;
//             vs[u][v] = vs[v][u] = true;
//             dfs(v, len + 1);
//             vs[u][v] = vs[v][u] = false;
//         }
//     }
// }

// void testCase()
// {
//     res = 0;
//     cin >> n >> m;
//     G.clear();
//     G.resize(20);
//     while (m--)
//     {
//         cin >> u >> v;
//         G[u].push_back(v);
//         G[v].push_back(u);
//     }
//     for (int i = 0; i < n; ++i)
//     {
//         dfs(i, 0);
//     }
//     cout << res;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T = 1;
//     cin >> T;
//     while (T--)
//     {
//         testCase();
//         cout << "\n";
//     }
//     return 0;
// }

int n, k;
string s;
bool final = false, ok = false;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        s[i] = '1';
    }
}
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '0')
    {
        s[i] = '1';
        i--;
    }
    if (i < 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = '1';
        }
    }
    else
    {
        s[i] = '0';
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> s;
        sinh();
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}
