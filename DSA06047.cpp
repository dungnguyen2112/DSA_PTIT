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
        sort(a, a + n);
        bool check1 = false;
        for (long long i = 0; i < n; i++)
        {
            bool check = false;
            for (long long j = i + 1; j < n; j++)
            {
                long long py = a[i] * a[i] + a[j] * a[j];
                long long p = sqrt(py);
                if (p * p == py && binary_search(a + j + 1, a + n, sqrt(py)))
                {
                    cout << "YES" << endl;
                    check = true;
                    break;
                }
            }
            if (check)
            {
                check1 = true;
                break;
            }
        }
        if (!check1)
        {
            cout << "NO" << endl;
        }
    }
}