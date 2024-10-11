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
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int prefix[n + 5];
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            if (prefix[i - 1] == prefix[n - 1] - prefix[i])
            {
                cout << i + 1 << endl;
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << -1 << endl;
        }
    }
}