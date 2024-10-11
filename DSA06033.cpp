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
        bool check = false;
        vector<pair<int, int>> mp;
        set<int> st;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp.push_back({a[i], i});
        }
        sort(mp.begin(), mp.end());
        int start = mp[0].first, start2 = mp[0].second;
        int max1 = -1;
        for (int i = 0; i < n; i++)
        {
            if (mp[i].first > start)
            {
                max1 = max(max1, mp[i].second - start2);
            }
            if (start2 > mp[i].second)
            {
                start2 = mp[i].second;
                start = mp[i].first;
            }
        }
        cout << max1 << endl;
    }
}