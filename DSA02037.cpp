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
int n;
vector<int> a, b;
vector<vector<int>> res;
int snt(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void solve()
{
    int sum = 0;
    for (int i : b)
        sum += i;
    if (snt(sum))
        res.push_back(b);
}

void Try(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        if (j == 1)
            b.push_back(a[i]);
        if (i == n - 1)
            solve();
        else
            Try(i + 1);
        if (j == 1)
            b.pop_back();
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n;
        a.resize(n);
        for (int &i : a)
            cin >> i;
        sort(a.rbegin(), a.rend());
        Try(0);
        sort(res.begin(), res.end());
        for (auto i : res)
        {
            for (int j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        b.clear();
        res.clear();
    }
}