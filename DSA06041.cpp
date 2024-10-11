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
    return a.second > b.second;
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> st;
        vector<pair<int, int>> v;
        map<int, int> mp, mp1;
        pair<int, int> mp2;
        mp2 = {-1, 1e5};
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (auto i : mp)
        {
            v.push_back({i.first, i.second});
        }
        sort(v.begin(), v.end(), cmp);
        if (v[0].second > n / 2)
        {
            cout << v[0].first << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}