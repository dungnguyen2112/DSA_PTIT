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
        vector<long long> a(n + 5), b(n + 5);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.begin() + n);
        sort(b.begin(), b.begin() + n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] * b[n - i - 1]);
        }
        cout << sum << endl;
        a.clear();
        b.clear();
    }
}