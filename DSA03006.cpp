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
long long mul = 1e9 + 7;
int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 1], b[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] && a[i] != b[n - i - 1])
            {

                cout << "No";
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            cout << "Yes";
        }
        cout << endl;
    }
}