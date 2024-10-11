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
    int x;
    cin >> x;
    while (x--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        if (m > n || 6 * n < 7 * m)
        {
            cout << -1;
        }
        else
        {
            cout << (ceil)(1.0 * (m * s) / n);
        }
        cout << endl;
    }
}