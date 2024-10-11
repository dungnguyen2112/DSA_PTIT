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
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int b[n + 5];
    vector<int> v1, v2;
    for (int i = 1; i <= n; i += 2)
    {
        b[i] = a[i];
        v1.push_back(a[i]);
    }
    sort(v1.begin(), v1.end());
    for (int i = 2; i <= n; i += 2)
    {
        b[i] = a[n - i];
        v2.push_back(a[i]);
    }
    sort(v2.rbegin(), v2.rend());
    for (int i = 0; i < max(v1.size(), v2.size()); i++)
    {
        if (v1.size() > v2.size())
        {
            if (i != v1.size() - 1)
            {
                cout << v1[i] << ' ' << v2[i] << ' ';
            }
            else
            {
                cout << v1[i];
            }
        }
        else
        {
            cout << v1[i] << ' ' << v2[i] << ' ';
        }
    }
}