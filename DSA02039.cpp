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
vector<int> a;
vector<vector<int>> res;
void out()
{
    cout << "(";
    for (int i = 0; i < a.size() - 1; ++i)
    {
        cout << a[i] << " ";
    }
    cout << a.back() << ") ";
}
void Try(int limit, int sum)
{

    if (sum == 0)
    {
        res.push_back(a);
    }
    for (int i = limit; i >= 1; --i)
    {
        if (sum >= i)
        {
            a.push_back(i);
            Try(i, sum - i);
            a.pop_back();
        }
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        Try(n, n);
        cout << res.size() << endl;
        for (auto i : res)
        {
            cout << "(";
            for (int j = 0; j < i.size() - 1; j++)
            {
                cout << i[j] << " ";
            }
            cout << i.back() << ") ";
        }
        cout << endl;
        a.clear();
        res.clear();
    }
}