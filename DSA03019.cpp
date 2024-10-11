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
        long long n, m;
        cin >> n >> m;
        while (1)
        {
            if (m % n == 0)
            {
                cout << 1 << "/" << m/n;
                break;
            }
            long long tu1 = m / n + 1;
            cout << "1/" << tu1 << " + ";
            n = n * tu1 - m;
            m *= tu1;
        }
        cout << endl;
    }
}