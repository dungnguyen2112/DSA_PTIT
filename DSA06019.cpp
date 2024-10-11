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
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        int sum = 1e7;
        bool check = false;
        map<int, int> mp;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto i : mp)
        {
            v.push_back({i.first, i.second});
        }
        sort(v.begin(), v.end(), cmp);
        for (auto i : v)
        {
            for (int j = 0; j < i.second; j++)
            {
                cout << i.first << ' ';
            }
        }
        cout << endl;
    }
}