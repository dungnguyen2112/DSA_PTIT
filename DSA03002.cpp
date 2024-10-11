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
int main()
{
    string a, b;
    cin >> a >> b;
    string c = a, d = b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '6')
        {
            a[i] = '5';
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '6')
        {
            b[i] = '5';
        }
    }
    cout << stoi(a) + stoi(b) << ' ';
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == '5')
        {
            c[i] = '6';
        }
    }
    for (int i = 0; i < d.size(); i++)
    {
        if (d[i] == '5')
        {
            d[i] = '6';
        }
    }
    cout << stoi(c) + stoi(d);
}