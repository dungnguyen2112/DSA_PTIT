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
string a;
vector<string> res;

void Try(int i, string s)
{
    for (int j = 0; j <= 1; j++)
    {
        if (j == 1)
        {
            s.push_back(a[i]);
        }
        if (i == n - 1)
        {
            if (s != "")
            {
                res.push_back(s);
            }
        }
        else
        {
            Try(i + 1, s);
        }
        if (j == 1)
            s.pop_back();
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> a;
        Try(0, "");
        sort(res.begin(), res.end());
        for (string i : res)
        {
            cout << i << ' ';
        }
        cout << endl;
        res.clear();
    }
}