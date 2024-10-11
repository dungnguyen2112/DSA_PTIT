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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1), a(n + 1), v1;
    for (auto &i : v)
    {
        cin >> i;
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        a[v[i]] = a[v[i] - 1] + 1;
        dem = max(dem, a[v[i]]);
    }
    cout << n - dem;
}