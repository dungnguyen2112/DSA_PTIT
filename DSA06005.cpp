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

int k;
bool cmp(int a, int b)
{
    return abs(k - a) < abs(k - b);
}
int res[100005], res1[100005];
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 5], b[m + 5];
        map<int, int> mp, mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mp2[b[i]]++;
        }
        for (auto i : mp1)
        {
            mp[i.first]++;
        }
        for (auto i : mp2)
        {
            mp[i.first]++;
        }
        for (auto i : mp)
        {
            cout << i.first << ' ';
        }
        cout << endl;
        for (auto i : mp)
        {
            if (i.second > 1)
            {
                cout << i.first << ' ';
            }
        }
        cout << endl;
    }
}