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
int n, a[100], x[100], s;
vector<vector<int>> v;
void Try(int i, int start, int sum)
{
    for (int j = start; j <= n; j++)
    {
        if (sum + a[j] <= s)
        {
            x[i] = a[j];
            if (sum + a[j] == s)
            {
                vector<int> tmp(x + 1, x + i + 1);
                v.push_back(tmp);
            }
            else
            {
                Try(i + 1, j, sum + a[j]);
            }
        }
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1, 1, 0);
        if (v.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << v.size() << ' ';
            for (auto i : v)
            {
                cout << "{";
                for (int j = 0; j < i.size(); ++j)
                {
                    cout << i[j];
                    if (j != i.size() - 1)
                        cout << " ";
                }
                cout << "} ";
            }
        }
        memset(a, 0, sizeof(a));
        v.clear();
        cout << endl;
    }
}