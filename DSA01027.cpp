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
int n, k;
vector<int> a, b;
bool final = false, ok = false;
vector<bool> visited;
vector<vector<int>> res;
void Try(int i)
{
    for (int j = 0; j < n; ++j)
    {
        if (!visited[j])
        {
            b[i] = a[j];
            visited[j] = true;
            if (i == n - 1)
                res.push_back(b);
            else
                Try(i + 1);
            visited[j] = false;
        }
    }
}
int main()
{
    cin >> n;
    a.resize(n);
    b.resize(n);
    visited.resize(n, false);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    Try(0);
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << ' ';
        }
        cout << endl;
    }
}