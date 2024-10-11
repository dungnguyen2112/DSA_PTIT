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
    return a.first > b.first;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int k;
        vector<pair<int, int>> a(n + 5);
        for (int i = 0; i < n; i++)
        {
            cin >> k >> a[i].first >> a[i].second;
        }
        sort(a.begin(), a.end(), cmp);
        map<int, int> mp;
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = a[i].first; j >= 1; j--)
            {
                if (mp[j] < 1)
                {
                    mp[j] = 1;
                    p.first++;
                    p.second += a[i].second;
                    break;
                }
            }
        }
        cout << p.first << ' ' << p.second << endl;
    }
}