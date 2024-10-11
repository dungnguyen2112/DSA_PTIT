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
    int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto i : s)
        {
            mp[i]++;
        }
        int max1 = -1;
        for (auto i : mp)
        {
            max1 = max(max1, i.second);
        }
        if (max1 > (s.size() + 1) / 2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}