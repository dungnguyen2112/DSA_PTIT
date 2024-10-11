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
        return a.second > b.second;
    }
    return a.first > b.first;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int seven = n / 7;
        int four = n % 7;
        while (four % 4 != 0 && seven > 0 && four <= 28)
        {
            four += 7;
            seven--;
        }
        bool check = false;
        if (four % 4 == 0)
            four /= 4;
        else
        {
            cout << -1;
            check = true;
        }
        if (!check)
        {
            while (four--)
                cout << 4;
            while (seven--)
                cout << 7;
        }
        cout << endl;
    }
}