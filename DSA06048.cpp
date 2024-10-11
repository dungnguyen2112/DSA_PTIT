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
        long long n;
        cin >> n;
        long long a[n + 5];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] == 1)
        {
            cout << 0 << endl;
        }
        else
            cout << n - a[0] + 1 << endl;
    }
}