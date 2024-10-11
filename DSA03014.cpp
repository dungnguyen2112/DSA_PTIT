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

bool cmp(pair<long long, long long> a, pair<long long, long long> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first > b.first;
}
bool checkcbrt1(string a, string b)
{
    int index = 0;
    for (int i = 0; i < b.length(); ++i)
    {
        if (a[index] == b[i])
            index++;
    }
    return (index == a.length());
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long n, k;
        cin >> n;
        bool check = false;
        for (int i = (long long)cbrt(n); i >= 1; --i)
        {
            k = pow(i, 3);
            if (checkcbrt1(to_string(k), to_string(n)))
            {
                cout << k << endl;
                check = true;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
    }
}